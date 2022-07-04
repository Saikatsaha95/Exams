#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int number_of_rooms = 0;
    for(int i=1; i<=n; i++){
        int p, q;
        scanf("%d %d", &p, &q);
        if(p+2<=q){
            number_of_rooms++;
        }
    }
    printf("%d", number_of_rooms);
}
