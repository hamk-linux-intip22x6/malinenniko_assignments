#include <stdio.h>
#include "conversion.h"
#include <ctype.h>

int main() {
	int choice;
	int test;
	double inch, cm;
	printf("\nInsert 1 to convert inches to centimeters.\nInsert 2 to convert centimeters to inches. ");
	scanf("%d", &choice);
	if (choice==1) {
		printf("How many Inches? ");
		scanf("%lf", &inch);
		test = (int)inch;
		if (test) {
			cm = inchtocm(inch);
			printf("%.2lf inches is %.2lf centimeters\n",inch, cm);
		}
		else {
			printf("Please enter a numerical value.");
		}
		return 0;
	} if (choice==2) {
		printf("How many Centimeters? ");
		scanf("%lf", &cm);
		test = (int)cm;
		if (test) {
			inch = cmtoinch(cm);
			printf("%.2lf centimeters is %.2lf inches\n",cm, inch);
		}
		else {
			printf("Please enter a valid numerical value.");
		}
		return 0;	
	}
	else {
		printf("Invalid Input.");
	}
	return 0;
}
