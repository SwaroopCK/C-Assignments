//Fibonacci Series With Recurssion
#include<stdio.h>
#include<conio.h>


void PrintFib(int n){
    static int n1 = 0, n2 = 1, n3;
    if(n>0){
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        printf("%d",n3);
        PrintFib(n-1);
    }
}

void main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    Prinf("Fibonacci Series is: ");
    printf("%d %d",0,1);
    PrintFib(n-2);
}