/*
 *  WINDOW.CPP
 *
 *  Copyright © 2023 MERGE TECHNOLOGIES
 *
 *  Apache License
 *  Version 2.0, January 2004
 *  http://www.apache.org/licenses/
 *
 */

#include "Window.h"
#include "../debugger/utils.h"
#include <GLFW/glfw3.h>
#include <gl/GL.h>

namespace MergeEngine {

    Window::Window() {
        glfwInit();

        MERGE_INFO("Initialized GLFW");
    }

    void Window::Initialize() { 
        init();
    }

    void Window::Clean() {
        m_renderer->Clean();
        glfwDestroyWindow(m_window);

        MERGE_INFO("Destroyed m_window");

        glfwTerminate();

        MERGE_INFO("Terminated GLFW");
    }

    void Window::EngineLoop() { loop(); }

    void Window::init() {
        m_window = glfwCreateWindow(DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT, APPLICATION_NAME, nullptr, nullptr);

        m_renderer = CreateUnique<Renderer>();
        m_renderer->Initialize();
        
        loop();
    }

    void Window::loop() {
        while (!glfwWindowShouldClose(m_window)) {
            //glfwSwapBuffers(m_window);
            glfwPollEvents();
        }

        Clean();
    }

    Renderer* const Window::GetRenderer() { return m_renderer.get(); }
} // namespace MergeEngine
