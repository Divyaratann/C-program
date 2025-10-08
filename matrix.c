#include <stdio.h>

int main()
{
    int i,j, marks[2][4]={{23,45,56,78,},{34,5,6,7,}};
   for( i=0;i<2;i++)
   {
       for (j=0;j<4;j++)
       
       {
         printf("%d  ",marks[i] [j]);
       }
       printf("\n");
    }
  
 return 0;
}