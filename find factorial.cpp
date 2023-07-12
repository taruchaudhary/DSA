
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int fact(int );
int main(){
    int num, factorial;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    factorial = fact(num);
    printf("The factorial of %d is: %d", num, factorial);

    return 0;
}
int fact(int n){
    int i, f = 1;
    for (i = 1; i <= n; i++){
        f = f * i;
    }
    return f;
}
