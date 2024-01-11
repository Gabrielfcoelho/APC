// C Program to replace a word in a text by another given
// word by inplace updation
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceWord(char* str, char* oldWord, char* newWord)
{
	char *pos, temp[1000];
	int index = 0;
	int owlen;

	owlen = strlen(oldWord);

	// Repeat This loop until all occurrences are replaced.

	while ((pos = strstr(str, oldWord)) != NULL) {
		// Bakup current line
		strcpy(temp, str);

		// Index of current found word
		index = pos - str;

		// Terminate str after word found index
		str[index] = '\0';

		// Concatenate str with new word
		strcat(str, newWord);

		// Concatenate str with remaining words after
		// oldword found index.
		strcat(str, temp + index + owlen);
	}
}

int main()
{
	char str[10005], oldWord[100], newWord[100];
	
	fgets(str,10005,stdin);
	str[strlen(str)-1]=0;

	fgets(oldWord,100,stdin);
	oldWord[strlen(oldWord)-1]=0;

	fgets(newWord,100,stdin);
	word2[strlen(newWord2)-1]=0;

	replaceWord(str, oldWord, newWord);

	printf("%s\n", str);

	return 0;
}
