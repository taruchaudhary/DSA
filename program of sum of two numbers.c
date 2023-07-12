#include<stdio.h>
#include<conio.h>
void main()
{
    int *p1,*p2,sum;
    clrscr();
    printf("enter two no's:");
    scanf("%d%d,&*p1,&*p2");
    sum=*p1+*p2;
    printf("sum=%d",sum);
    getch();
}
