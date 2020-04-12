#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include <stdlib.h>
#include "Transfer.hpp"
void function_list();
void Inquiry();
void Save();
void Withdraw();
void Transfer();
void Quit() {
	exit(0); 
}

int main() {

	while (1) {
		function_list();
	}

	return 0;
}


void function_list() {
	int i;

	do {

		printf("\t\t|$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$|\n");
		printf("\t\t|                                               |\n");
		printf("\t\t|       Welcome to Use ATM System         	|\n");
		printf("\t\t|                                               |\n");
		printf("\t\t|    Please Select The Following Functions:     |\n");
		printf("\t\t|                                               |\n");
		printf("\t\t|   $$-Inquery	 -- Press 1			|\n");
		printf("\t\t|   $$-Save      -- Press 2			|\n");
		printf("\t\t|   $$-Withdraw	 -- Press 3			|\n");
		printf("\t\t|   $$-Transfer	 -- Press 4			|\n");
		printf("\t\t|   $$-Quit      -- Press 5			|\n");
		printf("\t\t|                                               |\n");
		printf("\t\t|$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$|\n");

		printf("\n\n\n\n");

		printf("Please Input Number:");
		scanf("%d", &i);

		switch (i) {

			case 1: Inquiry(); break;
			case 2: Save(); break;
			case 3: Withdraw(); break;
			case 4: Transfer(); break;
			case 5: Quit(); break;
			default: printf("Number should between 1 -- 5!\n");
		}

	} while (1);
}

