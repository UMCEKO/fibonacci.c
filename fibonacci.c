#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	start:;
	int x,y,z,sayi;
	scanf("%d",&sayi);
	x=1;
	y=1;
	sayi--;
	while(sayi!=1){
		z=x+y;
		x=y;
		y=z;
		sayi--;
	}
	printf("%d\n",y);
	goto start;
	return 0;
}
