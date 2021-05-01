#include <stdio.h>
int main( ) {
	/*
	A program to find the first instance (if any) of multiple letters in
	the same word. Will tell the user the letter that is duplicated and
	how many times it appears in the word.

	Example:
	Enter a word: Hello
	The letter l is repeated 2 times.

	*/
	char dupword[20];
	char duplicate;
	int number = 1;
	printf("Enter a word: ");
	scanf("%s", &dupword);
	for (int i = 0; i < strlen(dupword); i++) {
		duplicate = dupword[i];
		for (int j = i + 1; j < strlen(dupword); j++) {
			if (dupword[j] == duplicate) {
				number = number + 1;
			}
		}
		if (number >= 2) {
			printf("The letter %c is repeated %i times.", duplicate, number);
			return 0;
		}
	}
	printf("There are no duplicate letters in this word.");
	return 0;
}
