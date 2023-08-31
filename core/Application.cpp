/*
 *  APPLICATION.CPP
 *
 *  Copyright © 2023 MERGE TECHNOLOGIES
 *
 *  Apache License
 *  Version 2.0, January 2004
 *  http://www.apache.org/licenses/
 *
 */

#include "Application.h"
#include "../debug/utils.h"

namespace MergeEngine {
Application::Application() : m_instance(this) {
  MERGE_WARN("Merge Engine currently does not support any kind of rendering");
}

Application::~Application() { m_window->Clean(); }

Application &Application::Get() { return *m_instance; }

void Application::Run() {
  m_window = CreateUnique<Window>();
  m_window->Initialize();
}

Window *const Application::GetWindow() { return m_window.get(); }

} // namespace MergeEngine
