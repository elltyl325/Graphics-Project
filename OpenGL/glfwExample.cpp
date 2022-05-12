#include <cstdlib>
#include <iostream>
#include <vector>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"

#include "GLSL.h"

int CheckGLErrors(const char *s)
{
    int errCount = 0;
    
    return errCount;
}

int main(void)
{
    /* Initialize the library */
    if (!glfwInit()) {
        exit (-1);
    }

    // throw std::runtime_error("Error! initialization of glfw failed!");

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    /* Create a windowed mode window and its OpenGL context */
    int winWidth = 1000;
    float aspectRatio = 1.0; // 16.0 / 9.0; // winWidth / (float)winHeight;
    int winHeight = winWidth / aspectRatio;
    
    GLFWwindow* window = glfwCreateWindow(winWidth, winHeight, "OpenGL Example", NULL, NULL);
    if (!window) {
        std::cerr << "GLFW did not create a window!" << std::endl;
        
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    glewExperimental = GL_TRUE;
    GLenum err=glewInit();
    if(err != GLEW_OK) {
        std::cerr <<"GLEW Error! glewInit failed, exiting."<< std::endl;
        exit(EXIT_FAILURE);
    }

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    glClearColor(1.0, 0.75, 0.8, 1.0);

    int fb_width, fb_height;
    glfwGetFramebufferSize(window, &fb_width, &fb_height);
    glViewport(0, 0, fb_width, fb_height);

    double timeDiff = 0.0, startFrameTime = 0.0, endFrameTime = 0.0;

    // Make a Triangle ------------
    GLuint m_triangleVBO;
    glGenBuffers(1, &m_triangleVBO);

    // Reference Step 2 in lab 9
    glBindBuffer(GL_ARRAY_BUFFER, m_triangleVBO);

    // The following code allocates memory on the host to hold
    // the vertices in the CPU host memory.  We use the std::vector
    // initialization list to set the vertex data:


    // std::vector< float > host_VertexBuffer{ 0.0f, 3.0f, 0.0f,   // V0 -- red, blue, green
    //                                         1.0f, 0.0f, 1.0f,   // V0
    //                                         -3.0f, -3.0f, 0.0f, // V1
    //                                         1.0f, 1.0f, 0.0f,   // V1
    //                                         3.0f, -3.0f, 0.0f,  // V2
    //                                         0.0f, 1.0f, 1.0f }; // V2
    std::vector< float > host_VertexBuffer{ 0.0f, 3.0f, 0.0f,   // V0 -- magenta, cyan, yellow
                                            1.0f, 0.0f, 0.0f,   // V0
                                            -3.0f, -3.0f, 0.0f, // V1
                                            0.0f, 1.0f, 0.0f,   // V1
                                            3.0f, -3.0f, 0.0f,  // V2
                                            0.0f, 0.0f, 1.0f }; // V2
    int numBytes = host_VertexBuffer.size() * sizeof(float);

    glBufferData(GL_ARRAY_BUFFER, numBytes, host_VertexBuffer.data(), GL_STATIC_DRAW);
    
    // Once the data has been copied to the GPU, it can safely be deleted from the host
    // memory.
    host_VertexBuffer.clear();
    GLuint m_VAO;
    glGenVertexArrays(1, &m_VAO);  // Step 1 lab 9
    glBindVertexArray(m_VAO);      // Step 2 lab 9

    glEnableVertexAttribArray(0);  // enable attrib 0 - Vertex Position
    glEnableVertexAttribArray(1);  // enable attrib 1 - Vertex color

    glBindBuffer(GL_ARRAY_BUFFER, m_triangleVBO);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (const GLvoid *)12);  // Color

    glBindVertexArray(0);

    sivelab::GLSLObject shader;
    shader.addShader( "vertexShader_perVertexColor.glsl", sivelab::GLSLObject::VERTEX_SHADER );
    shader.addShader( "fragmentShader_perVertexColor.glsl", sivelab::GLSLObject::FRAGMENT_SHADER );
    shader.createProgram();
    GLuint projMatrixID = shader.createUniform( "projMatrix" );  // gets reference to projMatrix var

    // you can ONLY set the data for a uniform variable when the shader is bound, so
    // make sure to activate it first:
    shader.activate();
    float left = -7.5, right = 7.5, bottom = -4.2, top = 4.2, near = -10.0, far = 10.0;
    glm::mat4 projMatrix = glm::ortho(left, right, bottom, top, near, far);
    glUniformMatrix4fv(projMatrixID, 1, GL_FALSE, glm::value_ptr(projMatrix));

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        // Clear the window's buffer (or clear the screen to our
        // background color)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        /* Render here */
        shader.activate();  // bind the shader that will process the vertices and fragments

        glBindVertexArray(m_VAO);            // bind the VAO 
        glDrawArrays(GL_TRIANGLES, 0, 3);    // tell OpenGL to render it
        glBindVertexArray(0);

        shader.deactivate(); // unbind the shader so it doesn't affect other vertex data

        endFrameTime = glfwGetTime();
        timeDiff = endFrameTime - startFrameTime;
        startFrameTime = glfwGetTime();

        // Prints fps if t is pressed
        int state = glfwGetKey(window, GLFW_KEY_T);
        if(state == GLFW_PRESS){
            std::cout << 1/timeDiff << "fps" << std::endl;
        }

        
        
        

        // Swap the front and back buffers
        //glfwSwapInterval(0);
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();

        if (glfwGetKey( window, GLFW_KEY_ESCAPE ) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, 1);
    }
    glfwTerminate();
    return 0;
}




