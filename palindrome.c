#include<stdio.h>
int main(){
    int n, last ,digit,rev = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    last = n;
    while(n > 0){
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if (rev == last)
        printf("IT is  an palindrome number\n", last);
    else
        printf("ITS not a palindrome number\n", last);
    return 0;

}