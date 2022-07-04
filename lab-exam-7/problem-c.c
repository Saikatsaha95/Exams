#include<stdio.h>

int main(){
    char arr[1001];
    fgets(arr, 1001, stdin);
    arr[strlen(arr) - 1] = '\0';
    int counter[10] = {0};
    for(int i = 0; i<strlen(arr); i++){
        if(arr[i]>='0' && arr[i] <= '9'){
            char value = arr[i];
            counter[value - '0'] += 1;
        }

    }

    for(int i = 0; i<10; i++){
        printf("%d ", counter[i]);
    }
}
