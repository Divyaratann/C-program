#include <stdio.h>
#include<conio.h>
void main()
{
    int i;
    float Area,a,b,h;
    for(i=1;i<=5;i++)
    {
        printf("enter the value of a\n");
        scanf("%f",&a);
        printf("enter the value of b \n");
        scanf("%f",&b);
        printf("enter the value of h\n");
        scanf("%f",&h);
    
       Area=(a+b)/2 *h;
        printf("the area of trapezium = %f \n", Area);
        
    }
}    
