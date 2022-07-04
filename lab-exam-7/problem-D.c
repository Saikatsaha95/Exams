#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, c = -1, value;
        scanf("%d", &n);
        int arr[200001] = {0};
        for(int i = 0; i<n; i++){
            scanf("%d", &value);
            arr[value]++;
            if(arr[value]>2){
                c = value;
            }
        }
        printf("%d\n", c);
    }
        return 0;

}


