#include<stdio.h>
int main() {
	unsigned int score[3], sum = 0;
	for (int i = 0;i < 3;i++) {
		if (i == 0)	printf("Enter mathemathics scores: ");
		if (i == 1)	printf("Enter science scores : ");
		if (i == 2)	printf("Enter language scores : ");
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	if (sum >= 80) {
		printf("A");
	}
	else if (sum >= 75) {
		printf("B+");
	}
	else if (sum >= 70) {
		printf("B");
	}
	else if (sum >= 65) {
		printf("C+");
	}
	else if (sum >= 60) {
		printf("C");
	}
	else if (sum >= 55) {
		printf("D+");
	}
	else if (sum >= 50) {
		printf("D");
	}
	else printf("F");
	return 0;
}