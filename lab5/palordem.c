#include <stdio.h>
#include <string.h>
int main (){
    char word[50],word2[50]={}, ordem;
    int n;
    scanf("%d ", &n);
    while(n>0){
        ordem='O';
        fgets(word,50,stdin);
        word[strlen(word)-1]=0;
        strcpy(word2,word);
        for(int i=0; word2[i]!=0;i++)
        {
            if(word2[i]>='A' && word2[i]<='Z')
            word2[i]+=32;
        }
        for(int i=0;word2[i]!=0;i++){
            if(word2[i+1]==0){
                if(word2[i]<=word2[i-1]){
                    ordem='N';
                    break;
                } 
            }
            if(i>0){
                if(word2[i-1]>= word2[i]){
                    ordem='N';
                    break;
                }
            }   
        }
        printf("%s: %c\n", word, ordem);
        n--;
    }
    return 0;
}