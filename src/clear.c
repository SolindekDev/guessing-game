#include <stdlib.h>
#include <stdio.h>

#ifdef _WIN32
    #define OS_NAME "Windows"
#elif _WIN64
    #define OS_NAME "Windows"
#elif __linux__
    #define OS_NAME "Linux"
#elif TARGET_OS_MAC
    #define OS_NAME "MacOS"
#endif

void cls() {
    if (OS_NAME == "Windows") {
        // If system is windows
        system("cls");
    } else if (OS_NAME == "MacOS") {
        // If system is macos
        system("clear");
    } else if (OS_NAME == "Linux") {
        // If system is based on linux
        system("clear");
    }
}