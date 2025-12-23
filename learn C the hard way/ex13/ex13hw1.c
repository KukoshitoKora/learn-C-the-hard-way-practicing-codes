#include<stdio.h>

int main(int argc, char *argv[])
{
	int i=0;
	
	printf("argc = %d\n",argc);
	printf("argv[0] = %s\n",argv[0]);
	printf("argv[1] = %s\n",argv[1]);
	
	if(argc != 2)
		return 1;

	for(i = 0;argv[1][i] != '\0';i++){
		char letter = argv[1][i];
		if(letter >= 'A' && letter <= 'Z'){
			letter = letter | 32;
			argv[1][i] = letter;
		}
	}

	printf("%s\n",argv[1]);
	return 0;
}
