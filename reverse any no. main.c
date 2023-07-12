# include<stdio.h>
# include<conio.h>
int rev(t);
void main()
{
    int num,t;
    printf("enter any number");
    scanf("%d",&num);
    t=rev(num);
    printf("reverse of %d is %d",num,t);
    getch();
}
int rev(int n)
{
    int r=0,d;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    return(r);
}
