#include<stdio.h>
#include<string.h>

int check_subsequence (char a[], char b[]) {
  int c, d;

  c = d = 0;

  while (a[c] != '\0') {
    while ((a[c] != b[d]) && b[d] != '\0') {
      d++;
    }
    if (b[d] == '\0')
      break;
    d++;
    c++;
  }
  if (a[c] == '\0')
    return 1;
  else
    return 0;
}

int main()
{
    char s[1000];
    char substring[6] = "heidi";
    int counter[26] = {0};
    scanf("%s", &s);
    if(strlen(s)<=5){
        printf("NO");
        return 0;
    }
    int t = check_subsequence(substring, s);
    if(t){
        printf("YES");
    }
    else{
        printf("NO");
    }



    return 0;
}

