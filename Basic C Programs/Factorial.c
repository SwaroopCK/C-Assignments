//Factorial Without Recurssion
#include<stdio.h>
#include<conio.h>
int main(){
    int number,i,fact=1;
    printf("\n Enter number to find Factorial: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        fact = fact * i;
    }
    printf("\n Factorial of %d is %d",number,fact);
}