#include "pwd.h"

int main(int argc, char** argv) {
	
	if (pwd_command(argc, argv) < 0) {
		return -1;
	}
}
