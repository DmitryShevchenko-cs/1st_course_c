#include <iostream>
#include <stdio.h>
#include <cstdio>

int a, b, p, i, answer;

int main() {

	printf("Hello, let's play a game?\nI guess the number and if you guess more than mine you will win $ 1,000,000,\nbut if you lose then you give me 1$.\n1-play\n2-ignore\n");
	scanf_s("%d", &answer);
	if (answer == 1) {

		printf("Input your number: ");
		scanf_s("%d", &a);
		if (a > 0 && a < 1000) {
			b = a + 88;
			printf("%d Sorry, but you lost.\nTry again?", b);
		}
		if (a > 1000 && a < 10000) {
			b = a + 1256;
			printf("%d Sorry, but you lost.\nTry again?", b);
		}
		if (a > 10000 && a < 100000) {
			b = a + 10288;
			printf("%d Sorry, but you lost.\nTry again?", b);
		}
		if (a > 100000) {
			b = a + 99000;
			printf("%d Sorry, but you lost.\nTry again?", b);
		}

	}

	else if (answer == 2) {
		printf("As you wish");
	}
	else {
		printf("Wrong answer");
	}

}