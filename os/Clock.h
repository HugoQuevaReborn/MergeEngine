/*
*  CLOCK.H
*
*  Copyright © 2023 MERGE TECHNOLOGIES
*
*  Apache License
*  Version 2.0, January 2004
*  http://www.apache.org/licenses/
*
*/

#include "../core/defines.h"
#include <chrono>
#include <string>

namespace MergeEngine{
    class Clock{
    public:
        /// <summary>
        /// Return the current time of the operating system.
        /// </summary>
        /// <returns></returns>
        static std::chrono::system_clock::time_point GetCurrentTime();

        /// <summary>
        /// Return the current hour time in a character buffer.
        /// 
        /// If the buffer is nullptr, the entire engine will assert.
        /// </summary>
        /// <param name="buffer"></param>
        static void GetCurrentHours(char* buffer);
    };
}
