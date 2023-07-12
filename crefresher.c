#include <stdio.h>
#include<conio.h>
int main()
{
    int a[5][5], t_math[][];
    int r, c;
    int sym;
    int i, j;
    printf("input no. of rows: ");
    scanf("%d", &r);
    printf("input no. of columns: ");
    scanf("%d", &c);
    printf("/n" input matrix "/n");
    for (i = 0; i <= r - 1; i++)
        for (j = 0; j <= c - 1; j++)
        {
            printf("input element %d,%d:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        for(i=0;i<=r-1;i++)
         for(j=0,j<=c-1;j++)
         t_a[j][i]=a[i][j];
         sym=1;
         for(i=0;i<=r-1;i++)
          for(j=0;j<=c-1;j++)
          if(a[i][j]!=t_a[i][j])
          sym=0;
          printf("\n"matrix"\n");
          for(i=0;i<=r-1;i++)
          {
            for(j=0;j<=c-1;j++)
             printf("%d\t",a[i][j]);
             printf("\n");

          }
           printf("\n"transpose matrix"\n");
           for(i=0;i<=c-1;i++)
           {
            for(j=0;j<=r-1;j++)
            printf("%d\t",t_a[i][j]);
            printf("\n");

           }


}