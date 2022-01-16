//Check weather number is Armstrong or not
#include<stdio.h>
#include<conio.h>
void main(){
    int n,temp,r,sum=0;
    printf("\n Enter number:");
    scanf("%d",&n);
    temp = n;
    while (n>0)
    {
        r = n%10;
        sum = sum + (r*r*r);
        n = n/10;
    }
    if(temp == sum){
        printf("\n Number is Armstrong");
    }
    else{
        printf("\n Not a Armstrong number");
    }
}