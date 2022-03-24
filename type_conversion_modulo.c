#include <stdio.h>

int is_perfect_modulo(float x,float y);

int main() {
    float a,b;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    if(is_perfect_modulo(a,b)){
        printf("The given numbers %.2f is a perfect modulo of %.2f",a,b);
    } else {
        printf("The given numbers %.2f is not a perfect modulo of %.2f",a,b);
    }
}

int is_perfect_modulo(float x, float y){
    int a,b;
    a = (int) x;
    b = (int) y;
    return (a%b == 0);
}