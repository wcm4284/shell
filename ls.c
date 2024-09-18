#include "ls.h"
#include "pwd.h"
#include <unistd.h>


int ls_command(int argv, char** argc) {

	char cwd[1024];

	if (!getcwd(cwd, sizeof(cwd))) {
		
	}

	return 0;

}

