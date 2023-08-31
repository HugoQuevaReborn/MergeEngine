/*
*  RENDERER.CPP
*
*  Copyright © 2023 MERGE TECHNOLOGIES
*
*  Apache License
*  Version 2.0, January 2004
*  http://www.apache.org/licenses/
*
*/

#include "Renderer.h"
#include "../core/defines.h"
#include "../debugger/utils.h"

namespace MergeEngine{
    void Renderer::Initialize(){
        m_context = CreateUnique<OpenGLContext>();
        m_context->InitContext();
    }

    void Renderer::Clean(){
        m_context->CleanContext();        
    }
}
