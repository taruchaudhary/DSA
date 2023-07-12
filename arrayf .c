#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10];i;sum=0;
    float av;
    clrscr();
    prinf("enter element of an arrray:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        sum=sum+a[i];
    printf("sum=%d",sum);
    getch();
}
