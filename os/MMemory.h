/*
*  MMEMORY.H
*
*  Copyright © 2023 MERGE TECHNOLOGIES
*
*  Apache License
*  Version 2.0, January 2004
*  http://www.apache.org/licenses/
*
*/

#pragma once

#include <memory>
#include <utility>

namespace MergeEngine{
    template<typename T>
    using Unique = std::unique_ptr<T>;

    template<typename T, typename ... Args>
    Unique<T> CreateUnique(Args&& ... args){
        return std::make_unique<T>(std::forward<Args>(args)...);
    }
}
