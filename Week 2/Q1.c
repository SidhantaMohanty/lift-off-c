#include <stdio.h>

int main()
{
	int Size, i, num, occr = 0;

	printf("Please Enter the Array size : ");
	scanf("%d", &Size);

	int arr[Size];
	
	printf("Enter %d elements of the array: ", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Please Enter the element whose occurrence you want to know : ");
	scanf("%d", &num);

	for (i = 0; i < Size; i++)
	{
		if (arr[i] == num)
		{
			occr++;
		}
	}

	printf("%d Occurred %d Times.\n", num, occr);
}