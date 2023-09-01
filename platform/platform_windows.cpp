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
#include <Windows.h>

namespace MergeEngine {
#ifdef MPLATFORM_WINDOWS
	void Platform::PlatformDependentLog(const std::string& message, u8 color) {
		HANDLE console_handle = GetStdHandle(STD_OUTPUT_HANDLE);
		const u8 colors[6] = {11,5,2,14,12,4};

		SetConsoleTextAttribute(console_handle, colors[color]);

		std::cout << message << std::endl;
	}
#endif
}