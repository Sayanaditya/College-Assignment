#include<stdio.h>

int main(){
    int factorial = 1, n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        factorial *= i;
    }
    printf("%d! = %d",n,factorial);
    return 0;
}