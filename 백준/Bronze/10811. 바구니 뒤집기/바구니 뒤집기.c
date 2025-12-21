int main(){
    int N, M, tmp, i, j;
    int arr1[100];
    int arr2[100];
    scanf("%d %d", &N, &M);
    for(int a = 0; a<N; a++){
        arr1[a] = a + 1;
        arr2[a] = a + 1;
    }
    for(int b = 0; b<M; b++){
        scanf("%d %d", &i, &j);
        if(i != j){
            for(int c = 0; c < j-i+1; c++){
                arr2[i+c-1] = arr1[j-c-1];
            }
            for(int x = 0; x<N; x++){
                arr1[x] = arr2[x];
            }
        }
    }
    for(int d = 0; d < N; d++){
        printf("%d ", arr2[d]);
    }
}