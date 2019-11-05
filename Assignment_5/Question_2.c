#include <stdio.h>

int main()
{
	int num[] = {9, 12, 20, 15, 1}, temp, ind1, ind2;
	
	for (ind1 = 0; ind1 < 5; ind1 = ind1 + 1)
	
	{
		for (ind2 = ind1 + 1; ind2 < 5; ind2 = ind2 + 1)
	
		{
			if(num[ind1] > num[ind2])
			{
				temp = num[ind1];
				num[ind1] = num[ind2];
				num[ind2] = temp;
			}
		}
	}
	for (ind1 = 0; ind1 < 5; ind1 = ind1 + 1)
	{
		printf("%d\n", num[ind1]);
	}
	
	return 0;
}
