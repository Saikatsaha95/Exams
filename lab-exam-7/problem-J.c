#include<stdio.h>
#include<string.h>

int main(){
    char word[101];
    int small_letter_count = 0;
    int upper_letter_count = 0;
    scanf("%s", &word);

    for(int i = 1; i<strlen(word); i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            small_letter_count++;
        }
    }

    for(int i = 0; i<strlen(word); i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            upper_letter_count++;
        }
    }

    if(word[0]>= 'a' && word[0] <= 'z' && small_letter_count == 0){
        word[0] = 'A' + (word[0] - 'a');
        for(int i = 1; i<strlen(word); i++){
            word[i] = 'a' + (word[i] - 'A');
        }
    }

    if(upper_letter_count == strlen(word)){
        for(int i = 0; i<strlen(word); i++){
            word[i] = 'a' + (word[i] - 'A');
        }
    }

    printf("%s", word);

}
