#include<stdio.h>
int main() {
    int n,max = 0,d;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n > 0){
        d = n % 10;
        if(d > max) max = d;
        n/= 10;
    }
    printf("Maximum digit = %d\n", max);
    return 0;
}