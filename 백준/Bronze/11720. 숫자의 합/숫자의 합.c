#include <stdio.h>

int main(){
    char a[100];
    int N;
    int result = 0;

    scanf("%d", &N);
    scanf("%s", &a);

    for(int i = 0; i<N; i++){
        result += a[i] - '0';
    }
    printf("%d", result);
}