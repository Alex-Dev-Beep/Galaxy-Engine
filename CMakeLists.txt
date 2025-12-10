cmake_minimum_required(VERSION 3.20)
project(GalaxyEngine)

set(CMAKE_CXX_STANDARD 20)

# Archivos fuente del proyecto
file(GLOB_RECURSE SOURCES
    "src/*.cpp"
)

add_executable(${PROJECT_NAME} ${SOURCES})

# Incluir headers
target_include_directories(${PROJECT_NAME} PUBLIC include)

# Compilar glad.c
target_sources(${PROJECT_NAME} PRIVATE src/glad.c)

# OpenGL
find_package(OpenGL REQUIRED)
target_link_libraries(${PROJECT_NAME} OpenGL::GL)

# GLFW .lib local
target_link_directories(${PROJECT_NAME} PUBLIC include/GLFW/lib)
target_link_libraries(${PROJECT_NAME} glfw3)
