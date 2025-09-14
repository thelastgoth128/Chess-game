#pragma once
#include <glm/glm.hpp>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

struct Vertex {
    glm::vec3 Position;
    glm::vec3 Normal;
    glm::vec2 TexCoords;
};

struct Texture{
    unsigned int id;
    string type;
    string path;
};

class Mesh {
    public:
        //mesh data
        vector<Vertex> vertices;
        vector<unsigned int> indices;
        vector<Texture> textures;

        Mesh(vector<Vertex> vertices, vector<unsigned int> indices, vector<Texture> textures);
        void Draw(shader &shader);
    
        private:
        //render data
        unsigned int VAO, VBO, EBO;
        void setupMesh();
};