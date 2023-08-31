/*
 *  WINDOW.H
 *
 *  Copyright © 2023 MERGE TECHNOLOGIES
 *
 *  Apache License
 *  Version 2.0, January 2004
 *  http://www.apache.org/licenses/
 *
 */

#pragma once
#include "../core/defines.h"
#include "../os/MMemory.h"
#include "Renderer.h"

typedef struct GLFWwindow GLFWwindow;

namespace MergeEngine {
class Window {
public:
  Window();
  ~Window() = default;

  void Initialize();
  void EngineLoop();
  void Clean();

  Renderer *const GetRenderer();

private:
  void init();
  void loop();
  void update(f32 dt);
  void render();

  GLFWwindow *m_window;
  Unique<Renderer> m_renderer;
};
}; // namespace MergeEngine
