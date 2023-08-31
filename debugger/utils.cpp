/*
*  UTILS.CPP
*
*  Copyright © 2023 MERGE TECHNOLOGIES
*
*  Apache License
*  Version 2.0, January 2004
*  http://www.apache.org/licenses/
*
*/

#include <sstream>
#include "utils.h"
#include "../core/defines.h"
#include "../platform/platform.h"
#include "../os/Clock.h"

namespace MergeEngine{
    void Debug::Log(const std::string& message, Debug::LOG_SEVERITY severity){
        const char* log_prefix[6] = {"[INFO]","[TRACEBACK]","[DEBUG]","[WARN]","[ERROR]","[FATAL]"};
        char hour_buffer[80];

        std::stringstream sstream;

        Clock::GetCurrentHours(hour_buffer);

        sstream << log_prefix[severity] << " ~ " << hour_buffer << " -> " << message;

        Platform::PlatformDependentLog(sstream.str(),severity);
    }
}
