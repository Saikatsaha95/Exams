#include<stdio.h>

int main(){
    int n;
    double A, B, sum = 0.0;

    scanf("%d", &n);
    for(int i = 1; i<= n; i++){
        scanf("%lf", &A);
        scanf("%lf", &B);
        sum += A*B;

    }

    printf("%0.3lf", sum);
}
