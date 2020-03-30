#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
	char string[] = "test program for teii";
	printf("%s\n", string);
	char *found = strstr(string,"dpii");

	if (found){
		printf("%s\n",found);
		found[0]='p';
		found[1]='s';
		found[2]='e';
		found[3]='r';
	}
	else printf("No match was found\n");
	printf("%s\n",string);

	return 0;
}
