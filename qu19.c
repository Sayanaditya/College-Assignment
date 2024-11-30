#include<stdio.h>

//Ascii value & equivalent characters printer

int main(){
    printf("The Ascii values and their equivalent characters (ASCII val --> character) are printed below:\n");
    for(int i = 0; i<=255 ; i++){
        printf("%d --> %c\n",i,i);
    }
    return 0;
}