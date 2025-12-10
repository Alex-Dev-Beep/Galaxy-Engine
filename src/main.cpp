#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main() {
    glfwInit();

    GLFWwindow* window = glfwCreateWindow(800, 600, "test", nullptr, nullptr);

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}