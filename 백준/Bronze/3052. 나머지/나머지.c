#include <stdio.h>

int main(){
    int module[42] = {0, };
    int num, index, total = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        index = num % 42;
        module[index] = 1;
    }
    for (int i = 0; i < 42; i++) {
        total += module[i];
    }
    printf("%d", total);
}