/*
*  CLOCK.CPP
*
*  Copyright © 2023 MERGE TECHNOLOGIES
*
*  Apache License
*  Version 2.0, January 2004
*  http://www.apache.org/licenses/
*
*/

#include "Clock.h"
#include <ctime>
#include "../debug/utils.h"
#include <iostream>

namespace MergeEngine{
    std::chrono::system_clock::time_point Clock::GetCurrentTime(){
        return std::chrono::system_clock::now();
    }

    void Clock::GetCurrentHoursToCharBuffer(char* buffer){
        const auto current = time(0);
        struct tm t_struct;
        localtime_s(&t_struct, &current);

        //http://en.cppreference.com/w/cpp/chrono/c/strftime
        strftime(buffer, strlen(buffer), "%X", &t_struct);
    }
}
