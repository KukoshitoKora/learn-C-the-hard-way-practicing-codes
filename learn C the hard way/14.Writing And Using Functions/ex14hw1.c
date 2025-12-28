#include <stdio.h>
#include <ctype.h>
//delete can_print_it
//int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i = 0;

	for(i = 0; i < argc; i++){
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	int i = 0;

	for(i = 0; arg[i] != '\0'; i++){
		char ch = arg[i];
		if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
			printf("'%c' == %d ", ch, ch);
		}
	}

	printf("\n");
}

/*int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}*/

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
