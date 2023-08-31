/*
*  PLATFORM_WINDOWS.CPP
*
*  Copyright © 2023 MERGE TECHNOLOGIES
*
*  Apache License
*  Version 2.0, January 2004
*  http://www.apache.org/licenses/
*
*/

#include "platform.h"
#include "../debugger/utils.h"
#include <iostream>

namespace MergeEngine {
#ifdef MPLATFORM_WINDOWS
	void Platform::PlatformDependentLog(const std::string& message, u8 color) {
		std::cout << message << std::endl;
	}
#endif
}