#include<stdio.h>
#include<conio.h>

void main(){
    int number,temp,r,sum = 0;
    printf("Enter number to Check: ");
    scanf("%d",&number);
    temp = number;
    while(number>0){
        r = number % 10;
        sum = (sum*10) + r;
        number = number/10;
    }
    if(temp == sum){
        printf("\n Number is Palindrome");
    }
    else{
        printf("\n Number is not Palindrome");
    }
}