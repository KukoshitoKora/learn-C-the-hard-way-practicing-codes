#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

void printf_struct_array(struct Person *array, int count)
{
	int i = 0;

	if(array == NULL)
		return;

	for(i = 0; i < count; i++)
	{
		printf("name = %s age = %d height = %d weight = %d\n", array[i].name, array[i].age, array[i].height, array[i].weight);
	}
}

int main(int argc, char *argv[])
{
	struct Person array[5];
	
	array[0].name = "joe";
	array[0].age = 32;
	array[0].height = 64;
	array[0].weight = 140;
	array[1].name = "frank";
	array[1].age = 20;
	array[1].height = 72;
	array[1].weight = 180;

	printf("sizeof(array[0]) %ld\n", sizeof(array[0]));
	printf("array[0] = %p\n",&array[0]);
	printf("array[1] = %p\n",&array[1]);
	printf("array[2] = %p\n",&array[2]);
	printf_struct_array(array, 5);

	return 0;
}
