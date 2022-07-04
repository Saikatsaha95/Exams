#include<stdio.h>
#include<string.h>

int main(){
    int n, zero = 0, one = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", &str);
    for(int i = 0; i<strlen(str); i++){
        if(str[i] == 'z') zero++;
        else if (str[i] == 'n') one ++;
    }
    while(one --){
        printf("%d ", 1);
    }

    while(zero--){
        printf("%d ", 0);
    }

}
