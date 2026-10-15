// #include<stdio.h>
// int main(){
//     int n,digit, sum = 0 , next;
//     printf("Enter a 3 digit number :");
//     scanf("%d",&n);
//     next = n;
//         if (n < 100 || n > 999) {
//         printf("Not a three-digit number\n");
//         return 0;
//         }
//         while (n > 0){
//          digit = n % 10;
//          sum += digit * digit * digit;
//          n /= 10;
//         }
//         if(sum == next)
//         printf("%d is an armstrong number\n",next);
//         else
//         printf("%d is not an Armstrong number\n", next);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n, next, sum = 0, digit;
//     printf("Enter a three digit number:");
//     scanf("%d",&n);
//     next = n;
//     if(n < 100 || n >999 ){
//         printf("Its not 3 digit number");
//         return 0;
//     }
//         while( n > 0 ){
//             digit = n % 10;
//             sum += digit * digit * digit;
//             n /= 10;
//         }
//         if(sum = next)
//         printf("%d is an armstrong number\n",next);
//         else
//         printf("%d is not an armstrong number\n",next);
//         return 0;
// }



#include<stdio.h>
int main(){
    int n,next, sum = 0, digit;
    printf("Enter a 3 digit number :");
    scanf("%d",&n);
    next = n;
    if(n < 100 || n > 999){
    printf("Its not a 3 digit number try something else\n");
    return 0;
    }
    while(n > 0){
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;

    }
    if ( sum == next)
    printf("%d is an armstrong number\n",next);
    else
    printf("%d is not an armstrong number\n",next);
    return 0;

}