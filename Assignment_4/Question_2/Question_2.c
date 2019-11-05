#include <stdio.h>
#include <math.h>

// 0 - 200 = 21.8
// 201 - 300 - 33.4
// 301 - 600 - 51.6
// 601 - 900 - 54.6
// >900 - 57.1

int main()
{	
	float totalUse, bill;
	int counter;
	
	FILE *fin, *fout;
	fin = fopen("tnb.dat", "r");
	fout = fopen("tnb.out", "w");
	
	fprintf(fout, "================================\n");
	
	for (counter = 1; counter <= 5; counter++)
	{
		fscanf(fin, "%f", &totalUse);
		
		if (totalUse <= 200.0)
		{
			bill = totalUse * 21.8 / 100.0;
		}
		else if (totalUse <= 300.0)
		{
			bill = 43.6 + (totalUse - 200.0) * 33.4 / 100.0;
		}
		else if (totalUse <= 600.0)
		{
			bill = 43.6 + 33.4 + (totalUse - 300.0) * 51.6 / 100.0;
		}
		else if (totalUse <= 900.0)
		{
			bill = 43.60 + 33.4 + 154.8 + (totalUse - 600.0) * 54.6 / 100.0;
		}
		else
		{
			bill = 43.6 + 33.4 + 154.8 + 163.8 + (totalUse - 900.0) * 57.1 / 100.0;
		}
		
		fprintf(fout, "Total unit use = %.2f kWh\n", totalUse);
		fprintf(fout, "Total payment = RM%.2f\n", bill);
		fprintf(fout, "================================\n");
	}
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
