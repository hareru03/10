#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	FILE*fp = NULL;
	char c;
	
	fp=fopen("sample.txt","r");
	
	while( (c=fgetc(fp)) != EOF) {
		putchar(c);
	}
	
	fclose(fp);
	
	return 0;
}

