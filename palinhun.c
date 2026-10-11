#include<stdio.h>
int main(){
    for(int i = 100; i <= 500;i++){
        int n = i, rev = 0;
        while(n > 0){
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        if (rev == i)
        printf("%d ", i);

    }
    printf("\n");
    return 0;

}