#include <stdio.h>
//prints a christmas tree pattern
int main() {
    int x,l;
    printf("Enter max width: ");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        if(i%2==0){
            l = (x-i-1)/2;
            for(int j=0;j<l;j++){
                printf(" ");
            }
            for(int j=0;j<i+1;j++){
                printf("*");
            }
            for(int j=0;j<l;j++){
                printf(" ");
            }
    }
        printf("\n");
    }
}