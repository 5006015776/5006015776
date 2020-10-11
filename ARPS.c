//
//Name: order.C
//Purpose: Show use of scanf, printf, and variable assignment
//Author: Erik Hartman
//

#include <stdio.h>

int main(void){

	printf("Welcome to SpaceBar!\nMay I take your order?\nCombo#s: 1-9 | Sizes: S M L\n");

	int Combo;
	char Size;
	double Price;
	//order1
	printf("Order 1 (Combo# Size Price): ");
	scanf("%d %c %lf\n",&Combo,&Size,&Price);
	//order


printf("  YOUR ORDER:\n====================================\n||COMBO|SIZE|PRICE||\n");
	printf("|  %d  | %c  | %.2lf|\n", Combo, Size, Price);

}
