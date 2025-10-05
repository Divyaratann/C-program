#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter any alphabet a,b,c");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        printf("a is fire");
        break;
        case 'b':
        printf("b is agni");
        break;
        case 'c':
        printf("c is warm");
        break;
    
        default:
        printf("wish you may know the alphabet");
        break;
    }    
    
}