#include <stdio.h>

int main ()
{
	
  FILE *fileinp, *fileout;
  fileinp = fopen("sales.dat", "r");
  fileout = fopen("sales.out", "w");

  int sales[5][4], ind1, ind2, jumbar[5], jumcol[4];
  float avgbar[5], avgcol[4];

  fprintf(fileout, "\tSALES ANALYSIS\n\n");
  fprintf(fileout, "\tQ1\tQ2\tQ3\tQ4\tTOTAL\tAVERAGE\n");
  fprintf(fileout, "\t===============================================\n");
  
  // Baca data dan kira jumlah baris dan average baris
  for(ind1 = 0; ind1 < 5; ind1++)
  {
  	jumbar[ind1] = 0;
    for(ind2 = 0; ind2 < 4; ind2++)
    {
      fscanf(fileinp, "%d", &sales[ind1][ind2]);
      jumbar[ind1] = jumbar[ind1] + sales[ind1][ind2];
    }
    avgbar[ind1] = (float) jumbar[ind1] / ind2;
    fscanf(fileinp, "\n");      
  }		       

  // Kira jumlah column dan average column
  
  for(ind2 = 0; ind2 < 4; ind2++)
  {
  	jumcol[ind2] = 0;
    for(ind1 = 0; ind1 < 5; ind1++)
    {
      jumcol[ind2] = jumcol[ind2] + sales[ind1][ind2];
    }
    avgcol[ind2] = (float) jumcol[ind2]/ ind1;
    fscanf(fileinp, "\n");      
  }

// Print baris

  for(ind1 = 0; ind1 < 5; ind1++)
  {
    fprintf(fileout, "BR#%d", ind1);    
    for(ind2 = 0; ind2 < 4; ind2++)
    {
      fprintf(fileout, "\t%d", sales[ind1][ind2]);
    }

    fprintf(fileout, "\t%d\t%.3f\n", jumbar[ind1], avgbar[ind1]);      
  }	
  fprintf(fileout, "\t===============================================\n");

// print total column 
   fprintf(fileout, "JUMLAH");
   for(ind2 = 0; ind2 < 4; ind2++)
   {
    fprintf(fileout, "\t%d", jumcol[ind2]);
   }
	 
   fprintf(fileout, "\n");     

// Print average column

  fprintf(fileout, "AVERAGE");
  for(ind2 = 0; ind2 < 4; ind2++)
  {
    fprintf(fileout, "\t%.1f", avgcol[ind2]);   
  }
	
  fclose(fileinp);
  fclose(fileout);

  return 0;
}
