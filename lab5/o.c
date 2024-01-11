#include <stdio.h>
#include <string.h>
int main()
{
    char str[102];
    int c=0;
    while(scanf("%[^\n]s", str)!=EOF){
        getchar();
        for(int i=0;str[i]!=0;i++){
            if(str[i]=='o')
            c++;
        }
    }
    printf("%d\n", c);
    return 0;
}