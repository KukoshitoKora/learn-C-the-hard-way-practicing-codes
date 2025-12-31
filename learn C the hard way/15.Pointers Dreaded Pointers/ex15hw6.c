#include <stdio.h>

int main(int argc, char *argv[])
{
    // create two arrays we care about
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {
	"Alan", "Frank",
	"Mary", "John", "Lisa"
	};
	int i = 0;
	
	int *ptr_ages = ages;
	char **ptr_names = names;

	printf("ptr_ages %d\n", *ptr_ages);
	printf("ptr_names %s\n", *ptr_names);
	printf("sizeof(names) %ld\n", sizeof(names));
	printf("sizeof(names[0]) %ld\n", sizeof(names[0]));
	printf("sizeof(ages) %ld\n", sizeof(ages));
	printf("sizeof(ages[0]) %ld\n", sizeof(ages[0]));
	
	for(i = 0; i < 5; i++){
		printf("%s has %d years alive.\n", *(ptr_names+i), *(ptr_ages+i));
		printf("ptr_names+%d %p\n", i, (ptr_names+i));
		printf("ptr_ages+%d %p\n", i, (ptr_ages+i));
	}

	return 0;
}
