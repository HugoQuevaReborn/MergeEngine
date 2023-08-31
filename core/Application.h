/*
 *  APPLICATION.H
 *
 *  Copyright © 2023 MERGE TECHNOLOGIES
 *
 *  Apache License
 *  Version 2.0, January 2004
 *  http://www.apache.org/licenses/
 *
 */

#pragma once
#include "../os/MMemory.h"
#include "../rendering/Renderer.h"
#include "../rendering/Window.h"

namespace MergeEngine {
class Application {
public:
  Application();
  ~Application();
  Application &Get();

  void Run();
  Window *const GetWindow();

private:
  Application *m_instance;
  Unique<Window> m_window;
};
} // namespace MergeEngine
