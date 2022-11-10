#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int array[10];
	int i, j, temp = 0;

	printf("請輸入10個整數:");
	for (i = 0; i < 10; i++) 
		scanf_s("%d", &array[i]);

	for (i = 0; i < 10; i++) 
		for (j = i; j < 10; j++)
			if (array[j] < array[i])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
	for (i = 0; i < 10; i++) 
		printf("%d ", array[i]);
	
	system("pause");
	return 0;
}