#include<stdio.h>
int main(){
    for(int i = 200; i<=300; i++) {
        if( i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
        printf("%d, ",i);
    }
    return 0;

}