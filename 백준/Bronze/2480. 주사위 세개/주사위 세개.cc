#include <stdio.h>

int main(){
    int a, b, c, prize, big;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c){
        prize = 10000 + (a * 1000);
    }
    else if(a == b){
        prize = 1000 + (a * 100);
    }
    else if(b == c){
        prize = 1000 + (b * 100);
    }
    else if(c == a){
        prize = 1000 + (c * 100);
    }
    else{
        if(a>b && a>c){
            big = a;
        }
        if(b>a && b>c){
            big = b;
        }
        if(c>a && c>b){
            big = c;
        }
        prize = big * 100;
    }
    printf("%d", prize);
}