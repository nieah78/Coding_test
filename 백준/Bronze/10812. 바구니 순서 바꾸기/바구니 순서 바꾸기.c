#include <stdio.h>

int main(){
    int N, M, begin, mid, end;
    int a[102];
    int b[102];
    int i, j, k, temp;
    scanf("%d %d", &N, &M);

    for(int x = 1; x < N+1; x++){
        a[x] = x;
        b[x] = x;
    }

    for(int x = 0; x < M; x++){
        scanf("%d %d %d", &i, &j, &k);
        for(int y = 0; y < j-k+1; y++){
            b[i+y] = a[k+y];
        }

        for(int y = 0; y < k-i; y++){
            b[j-k+i+y+1] = a[i+y];//b가 이상하네
        }

        for(int y = 1; y<N+1; y++){
            a[y] = b[y];
        }
    }

    for(int x = 1; x<N+1; x++){
        printf("%d ", b[x]);
    }
    
}