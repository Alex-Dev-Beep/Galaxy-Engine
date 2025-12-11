#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class App {
public:
    // Constructor (initialize GLFW)
    App();
    // Destructor (destroys and terminates GLFW)
    ~App();
    // Main Loop Function
    void run();
    // Presents the window as a pointer variable
    GLFWwindow* window;
};
