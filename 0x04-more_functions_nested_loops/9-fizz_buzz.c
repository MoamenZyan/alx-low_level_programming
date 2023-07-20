#include <stdio.h>
/**
* main - this is the main function
* Return: is always 0
*/

int main(void)
{
int i, count1, count2;
count1 = 0;
count2 = 0;
	for (i = 1; i <= 100; i++)
	{
		++count1;
		++count2;
		if (count1 == 3 && count2 == 5)
		{
			printf("FizzBuzz ");
			count1 = 0;
			count2 = 0;
			if (i == 100)
				printf("\n");
			continue;
		}
		else if (count1 == 3)
		{
			printf("Fizz ");
			count1 = 0;
			if (i == 100)
				printf("\n");
			continue;
		}
		else if (count2 == 5)
		{
			printf("Buzz ");
			count2 = 0;
			if (i == 100)
				printf("\n");
			continue;
		}
		printf("%d ", i);
		if (i == 100)
			printf("\n");
	}
return (0);
}
