#include<stdio.h>

int main(){
    int A, B, C, D, E, F, X;
    int takahashi, aoki;
    scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);

    //handling exceptions like if x = 0 or x<A or D
    while(A>X){
        A--;
        if(A == X) break;
    }
    while(D>X){
        D--;
        if(D == X) break;
    }


    if((A + C) >= X){
        takahashi = A * B;

    }else{
        takahashi = ((X-(A + C))+A) * B;
    }

    if((D + F) >= X){
        aoki = D * E;

    }else{
        aoki = ((X-(D + F))+D) * E;
    }

    if(takahashi > aoki){
        printf("Takahashi\n");
    }
    else if(takahashi < aoki){
        printf("Aoki\n");
    }
    else {
        printf("Draw\n");
    }
}
