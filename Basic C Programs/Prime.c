#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,m=0,flag=0;
    printf("Enter the number to Check Prime number: ");
    scanf("%d",&n);
    m = n/2;
    for(i=2;i<=m;i++){
        if(n%i == 0){
            printf("\n Number is not prime");
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("\n Number is prime");
    }
}