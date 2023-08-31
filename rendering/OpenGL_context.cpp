#include "OpenGL_context.h"
#include <GL/glew.h>

namespace MergeEngine{
    void OpenGLContext::InitContext(){
        glewInit();
    }

    void OpenGLContext::CleanContext(){

    }
}
