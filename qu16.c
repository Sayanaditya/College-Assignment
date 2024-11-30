#include<stdio.h>



int main(){
    int n,k=2;
    printf("Enter the number of terms to be shown of the Fibonacci sequence: ");
    scanf("%d",&n);
    if(n==1){
        printf("0");
    } else if(n==2){
        printf("0, 1");
    } else if(n>2){
        printf("0, 1");
        int a=0,b=1;
        for(int j=2;j<n;j++){
            printf(", %d",a+b);
            b += a;
            a = b-a;
        }
    }
    return 0;
}