#include<stdio.h>
#include<conio.h>
void main(){
    int n,rem,reverse = 0;
    printf("\n Enter number: ");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        reverse = reverse*10+rem;
        n = n/10;
    }
    printf("\n Reverse Number is: %d",reverse);
}