/*
*  PLATFORM_LINUX.CPP
*
*  Copyright © 2023 MERGE TECHNOLOGIES
*
*  Apache License
*  Version 2.0, January 2004
*  http://www.apache.org/licenses/
*
*/

#include "platform.h"
#include <iostream>
#include <sstream>
#include "../core/defines.h"

namespace MergeEngine{
#ifdef MPLATFORM_LINUX
    void Platform::Log(const std::string& message, u8 color){
        const char* colors[6] = {"1;34m","1;35m","1;32m","1;33m","1;31m","1;31m"};
        
        std::stringstream sstream;
        sstream << "\033[" << colors[color] << message << "\033[0m"; 

        std::cout << sstream.str() << std::endl;
    }
#endif
}
