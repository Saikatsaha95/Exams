#include<stdio.h>
#include<string.h>

int main(){
    char s[101];
    int c = 0;
    scanf("%s", &s);
    for(int i = 0; i<strlen(s); i++){
        int sum = 1;
        for(int j = i+1; j<strlen(s); j++){
            if(s[i] != s[j]) break;
            else if(s[i] == s[j]){
                sum++;
            }

        }

        if(sum >=7){
            c = 1;
            break;
        }
    }


    if(c==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
