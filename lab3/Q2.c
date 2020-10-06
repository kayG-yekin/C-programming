#include <stdio.h>
int main(){

	char letter;
	printf("Enter a letter to check if its a vowel: ");
	scanf("%c",&letter);

	switch(letter)
	{
		case 'a' || 'A':
		printf("It is a vowel\n");
		break;

		case 'e':
		printf("It is a vowel\n");
		break;

		case 'i':
		printf("It is a vowel\n");
		break;

		case 'o':
		printf("It is a vowel\n");
		break;

		case 'u':
		printf("It is a vowel\n");
		break;

		case 'A':
		printf("It is a vowel\n");
		break;

		case 'E':
		printf("It is a vowel\n");
		break;

		case 'I':
		printf("It is a vowel\n");
		break;

		case 'O':
		printf("It is a vowel\n");
		break;

		case 'U':
		printf("It is a vowel\n");
		break;

		default:
		printf("it is not a vowel\n");
	}
}