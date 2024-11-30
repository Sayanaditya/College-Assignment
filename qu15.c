#include<stdio.h>

int main(){
    int i,zeroes=0,positives=0,negatives=0;
    for(int j = 1 ; j<=100 ; j++){
        scanf("%d",&i);
        if(i>0)
            positives ++;
        else if(i<0)
            negatives ++;
        else if(i==0)
            zeroes ++;
    }
    printf("Number of zeroes: %d\nNumber of positives: %d\nNumber of negatives: %d",zeroes,positives,negatives);
    return 0;
}