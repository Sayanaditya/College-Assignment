#include<stdio.h>

//Armstrong number finder in 1-500

int main(){
    int start = 1,end = 500,temp,temp_sum;
    printf("The Armstrong numbers between 1 and 500 are : ");
    while(start<end){
        temp = start;
        temp_sum = 0;
        while(temp){
            temp_sum+=(temp%10)*(temp%10)*(temp%10);
            temp/=10;
        }
        if(start == temp_sum){
            printf(" %d ",start);
        }
        start ++;
    }
    return 0;
}