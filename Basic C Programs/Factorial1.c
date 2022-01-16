//Factorial of a number using Recurssion

#include<stdio.h>
#include<conio.h>

long factr(int n){
    if(n == 0)
     return 1;
    else{
        return(n*factr(n-1));
    }
}
int main(){
    int n;
    long fact;
    printf("\n Enter number to Find Factorial: ");
    scanf("%d",&n);
    fact = factr(n);
    printf("\n Factorial of %d number is %d",n,fact);
    return 0;
}