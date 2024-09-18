#include "pwd.h"
#include <unistd.h>
#include <stdio.h>

int pwd_command(int argv, char** argc) {
    char cwd[1024];
    if (!getcwd(cwd, sizeof(cwd))) {
        return -1;
    }
    printf("%s\n", cwd);
    return 0;
}