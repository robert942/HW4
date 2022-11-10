#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int linerSearch(const int array[], int key, int size);

int main(void)
{
	int a[SIZE] = { 0, 1, 2, 3, 4 };
	int x, searchkey, element;

	for (x = 0; x < SIZE; x++)
		a[x] = 2 * x;

	printf("Enter integer search key:\n");
	scanf_s("%d", &searchkey);

	element = linerSearch(a, searchkey, SIZE);

	if (element != -1)
		printf("Found value in element %d\n", element);
	else
		printf("Value not found\n");

	system("pause");
	return 0;
}

int linerSearch(const int array[], int key, int size)
{
	int n;

	for (n = 0; n < size; ++n)
	{
		if (array[n] == key)
			return n;
	}
	return -1;
}