#include <stdlib.h>
#include <stdio.h>

#ifdef _WIN32
    #define OS_NAME "Windows"
#elif _WIN64
    #define OS_NAME "Windows"
#else
    #define OS_NAME "OtherOS"
#endif

void cls() {
    if (OS_NAME == "Windows") {
        // If system is windows
        system("cls");
    } else if (OS_NAME == "OtherOS") {
        // If system is macos or linux or any other system
        system("clear");
    }
}