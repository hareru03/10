#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	FILE*fp = NULL;
	char str[30];
	
	fp=fopen("sample.txt","w");
	
	int word1,word2,word3;
	
	printf("input a word:");
	scanf("%s",str);
	fprintf(fp,"%s\n",str);
	
	printf("input a word:");
	scanf("%s",str);
	fprintf(fp,"%s\n",str);
	
	printf("input a word:");
	scanf("%s",str);
	fprintf(fp,"%s\n",str);
	
	fclose(fp);
	
	return 0;
}

