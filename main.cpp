/*
*  MAIN.CPP
*
*  Copyright © 2023 MERGE TECHNOLOGIES
*
*  Apache License
*  Version 2.0, January 2004
*  http://www.apache.org/licenses/
*
*/

#include <iostream>
#include "core/Application.h"
#include "debug/utils.h"

using namespace MergeEngine;

int main(){
    Application app;
    app.Get().Run();

    return 0;
}
