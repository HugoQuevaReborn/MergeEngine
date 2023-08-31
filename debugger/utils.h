/*
*  UTILS.H
*
*  Copyright © 2023 MERGE TECHNOLOGIES
*
*  Apache License
*  Version 2.0, January 2004
*  http://www.apache.org/licenses/
*
*/

#include <assert.h>
#include <string>
#include <stdlib.h>
#include "../core/defines.h"

#define MERGE_INFO(x)               MergeEngine::Debug::Log(x,Debug::LOG_SEVERITY::INFO)
#define MERGE_TRACEBACK(x)          MergeEngine::Debug::Log(x,Debug::LOG_SEVERITY::TRACEBACK)
#define MERGE_DEBUG(x)              MergeEngine::Debug::Log(x,Debug::LOG_SEVERITY::DEBUG)
#define MERGE_WARN(x)               MergeEngine::Debug::Log(x,Debug::LOG_SEVERITY::WARN)
#define MERGE_ERROR(x)              MergeEngine::Debug::Log(x,Debug::LOG_SEVERITY::ERROR)
#define MERGE_FATAL(x)              MergeEngine::Debug::Log(x,Debug::LOG_SEVERITY::FATAL) 

#if MPLATFORM_WINDOWS
#define ASSERT_UNREACHABLE __assume(0)
#elif MPLATFORM_LINUX
#define ASSERT_UNREACHABLE __builtin_unreachable
#elif MPLATFORM_MAC
#define ASSERT_UNREACHABLE 1 
#endif
#define MERGE_ASSERT(x)             assert(x)

namespace MergeEngine{
    class Debug {
    public:
        enum LOG_SEVERITY : u8 {
            INFO = 0,
            TRACEBACK = 1,
            DEBUG = 2,
            WARN = 3,
            ERROR = 4,
            FATAL = 5,
        };

        static void Log(const std::string& message, Debug::LOG_SEVERITY severity = LOG_SEVERITY::INFO);

    };
}
