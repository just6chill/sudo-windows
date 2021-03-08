#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char *help = "sudo syntax:\nsudo <command>\n\navalible commands:\nps - open powershell in admin mode\ncmd - open cmd in admin mode\n? - print this help message\n\nusage example:\nsudo cmd";

	if(argc < 2){
		printf("%s\n", help);
		return 1;
	}

	if(strcmp(argv[1], "cmd") == 0){
		system("Powershell -Command \"Start-Process cmd -Verb RunAs\"");
	}
	else if(strcmp(argv[1], "ps") == 0){
		system("Powershell -Command \"Start-Process -FilePath powershell -Verb RunAs\"");
	}
	else if(strcmp(argv[1], "?") == 0){
		printf("%s\n", help);
	}
	else{
		printf("%s\n", help);
		return 1;
	}
	
	return 0;
}