#include<stdio.h>

int main(){
    int s, t, x;
    scanf ("%d %d %d", &s, &t, &x);
    while (s != t){
        if(s<=x<=t){
            printf("Yes");
            break;
        }
        else{
            printf("No");
        }
        if(s == 24){
            s=0;
            continue;
        }
        s++;

    }

    return 0;
}
