#include<stdio.h>
#include<conio.h>
int main(){
    int a = 20, b = 10;
    printf("Before Swap a = %d b = %d",a,b);

    a = a + b;// 20 + 10 = 30 
    b = a - b;// 30 - 20 = 10 
    a = a - b;// 30 - 10 = 20

    printf("\n Values After Swapping are: a = %d b = %d" , a , b);
    return 0;
}