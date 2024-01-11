#include <stdio.h>

int main()
{
    char str[102];
    int n=0;
    fgets(str, 102, stdin);
    for(int i =0; str[i]!=0; i++)
    {
        n++;
    }
    str[n-1]=0;
    for(int i=0; str[i]!=0; i++)
    {
        printf("%c - %d\n", str[n-2-i], str[n-2-i]);
    }
}