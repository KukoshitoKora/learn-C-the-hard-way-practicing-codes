#include <stdio.h>
#include <ctype.h>
#include <string.h>

int can_print_it(char ch);
void print_letters(char arg[], int strl);

void print_arguments(int argc, char *argv[])
{
	int i = 0;
	int strl = 0;
	for(i = 0; i < argc; i++){
		strl = strlen(argv[i]);
		print_letters(argv[i], strl);
	}
}

void print_letters(char arg[], int strl)
{
	int i = 0;

	for(i = 0; i <= strl; i++){
		char ch = arg[i];
		if(can_print_it(ch)){
			printf("'%c' == %d ", ch, ch);
		}
	}

	printf("\n");
}

int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
	printf("argc =  %d\n",argc);
	int i = 0;
	for(i=0;i<=argc;i++){
		printf("argv[%d] = %s\n",i,argv[i]);
	}
	print_arguments(argc, argv);
	return 0;
}
