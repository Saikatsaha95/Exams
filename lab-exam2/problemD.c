#include<stdio.h>
#include<string.h>

int main(){
    int n;
    int countA = 0;
    int countD = 0;
    scanf("%d", &n);
    char ch[n];
    scanf("%s", &ch);
    int length = strlen(ch);
    for(int i = 0; i<length; i++){
        if(ch[i] == 'A'){
            ++countA;
        }
        else{
            ++countD;
        }
    }

    if(countA>countD){
        printf("Anton");
    }
    else if(countA<countD){
        printf("Danik");
    }
    else{
        printf("Friendship");
    }


    return 0;
}
