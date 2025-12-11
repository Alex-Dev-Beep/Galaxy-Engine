#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "app/app.hpp"

int main() {
    // Create the instance of the class application, check run function
    App app;
    app.run();
    return 0;
}
