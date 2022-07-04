#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, x, extra_digits = 0;
        scanf("%d", &n);
        char number[n];
        scanf("%s", &number);

        if(n < 11)
        {
            printf("NO\n");
            return 0;

        }

        for(int i = 0; i<n; i++)
        {
            if(number[i] == '8') break;
            else ++extra_digits;
        }

        int telephone_number = n - extra_digits;


        if(telephone_number >= 11){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    }

    return 0;
}
