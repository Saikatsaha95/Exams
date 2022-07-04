#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum_ab = a+b;
    int sum_ac = a+c;
    int sum_bc = b+c;

    if(sum_ab < sum_ac && sum_ab < sum_bc){
        printf("%d", sum_ab);
    }
    else if(sum_bc< sum_ac && sum_bc < sum_ab){
        printf("%d", sum_bc);
    }
    else {
        printf("%d", sum_ac);
    }
}
