#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main (int argc, char *argv) {
	char t[10];
	char text[9];
	
	int i;	
	
	for (i=0; i<pow(10,7); i++) {}	
	
	if (argc > 1) {
		t = &atol(argv[2]);
		sprintf(text, "%s", t);
	}
	else {
		sprintf(text, "Fottiti");
	}

	printf("%s\n", text);
	exit(0);
}
