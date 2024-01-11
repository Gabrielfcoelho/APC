
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	char str[10005], word[100], word2[100];
	fgets(str,10005,stdin);
	str[strlen(str)-1]=0;
	fgets(word,100,stdin);
	word[strlen(word)-1]=0;
	fgets(word2,100,stdin);
	word2[strlen(word2)-1]=0;
	char *pos, temp[10005];
	int index = 0;
	int owlen;

	owlen = strlen(word);

	while ((pos = strstr(str, word)) != NULL) {
		strcpy(temp, str);
		index = pos - str;
		str[index] = '\0';
		strcat(str, word2);
		strcat(str, temp + index + owlen);
	}
	

	printf("%s\n", str);

	return 0;
}

