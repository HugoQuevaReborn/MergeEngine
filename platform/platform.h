/*
*  PLATFORM.H
*
*  Copyright © 2023 MERGE TECHNOLOGIES
*
*  Apache License
*  Version 2.0, January 2004
*  http://www.apache.org/licenses/
*
*/#pragma once

#include <string>
#include "../core/defines.h"

namespace MergeEngine{
	class Platform {
	public:
		/*
		* Print message according to platform to support
		* terminal coloring on each platform.
		*/
		static void PlatformDependentLog(const std::string& message, u8 color);
	};
}
