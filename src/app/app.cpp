#include "app.hpp"
#include <iostream>

// Constructor
App::App() {
    // Initialize GLFW, and if there's an error, print
    if (!glfwInit()) {
        std::cerr << "Error initializing GLFW!" << std::endl;
    }

    // Use GLFW 4.6, and OpenGL Core Profile
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create the window
    window = glfwCreateWindow(800, 600, "Engine", nullptr, nullptr);
    // If there was an error creating the window
    if (!window) {
        std::cerr << "Error creating window!" << std::endl;
        glfwTerminate();
    }

    // Make the window as current context, deleting this will cause a GLAD error
    glfwMakeContextCurrent(window);

    // Load GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Error loading GLAD";
    }
}

// Destructor
App::~App() {
    // Basically cleanup
    glfwDestroyWindow(window);
    glfwTerminate();
}

// This should actually be called main loop, but for organization purposes it's called run
void App::run() {
    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.1f, 0.1f, 0.15f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}
