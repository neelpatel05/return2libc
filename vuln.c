#include<stdio.h>
#include<string.h>

void copy(char*);

int main(int argc, char** argv){
	char* str = argv[1];
	copy(str);
	return 0;
}

void copy(char* str){
	char buffer[75];
	strcpy(buffer, str);
}
