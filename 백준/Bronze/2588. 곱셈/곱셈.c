#include <stdio.h>

int main(){
    int _1, _2, _3, _4, _5, _6;
    scanf("%d %d", &_1, &_2);
    _5 = (_2 / 100) * _1;
    _4 = ((_2 % 100) / 10) * _1;
    _3 = (_2 % 10) * _1;
    printf("%d\n", _3);
    printf("%d\n", _4);
    printf("%d\n", _5);
    printf("%d", _1 * _2);
}