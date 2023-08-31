/*
*  RENDERER.H
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
#include "OpenGL_context.h"

namespace MergeEngine{
    class Renderer{
    public:
        void Initialize();
        void Clean();
    private:
        Unique<OpenGLContext> m_context;
    };
}
