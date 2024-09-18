#ifndef SHELL_H_
#define SHELL_H_

#include <stdarg.h>
#include <stdlib.h>

typedef int (*func)(int argv, char** argc);

struct shell {
	
	int argn;
	char** names;
	func* commands;

};

void count_arguments(int& argv) {


	return;
}


shell* init_shell() {
	
	shell* shell = (shell*) malloc(sizeof(shell));

	if (!shell) {
		return nullptr;
	}



	count_arguments(shell->argn);

	shell->commands = (func*) malloc(sizeof(func*shell->argn));

	
}


#endif
