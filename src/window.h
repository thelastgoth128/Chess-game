#pragma once
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include <iostream>

using namespace std;


class Window {
    public:
        void launch_glfw_renderer(); 
        void initialize_buffers();

   
};