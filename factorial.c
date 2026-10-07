#include<stdio.h>
int main(){
    int n,i,fact = 1;
    printf("Enter the number n:");
    scanf("%d",&n);
    for(int i = 1; i <= n;i++){
        fact = fact * i;
    }
    printf("Factorial = %d", fact);
    return 0; 
}