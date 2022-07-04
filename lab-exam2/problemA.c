#include<stdio.h>

int main(){
    int N, K, A;
    scanf ("%d %d %d", &N, &K, &A);
    int  i = A;
    while( i <= N && K > 1){
        --K;
        if(i==N){
            i = 1;
            continue;
        }
        i++;
    }

    printf("%d", i);
}
