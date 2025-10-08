#include <stdio.h>
#include<conio.h>
void
main ()
{
  int n,a[10], i, oddsum, evensum;
  printf ("\n enter the size of array=");
  scanf ("%d", &n);
  printf ("enter the array elements=");
  scanf ("%d", &a[i]);
  for (i = 0; i < n; i++)
    printf ("\n the array elements are \n");
  for (i = 0; i < n; i++)
    printf ("\t %d", a[i]);
  for (i = 0; i < n; i++)
  {
    if (a[10] % 2==0)
       evensum+=a[i];
       else
        oddsum+=a[i];

	}
    printf("\nthe sum of even elements:%d ",evensum);
    printf("\n the sum of odd elements: %d ", oddsum);
}