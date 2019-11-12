#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char buffer[8];
	double *pd;
	int *pi;
	
	pd = (double*)buffer;
	*pd = 3.14;
	printf("%f\n", *(double*)buffer);
	
	pi = (int*)buffer;
	*pi = 123;
	*(pi+1) = 456;
	printf("%d %d\n", *(int*)buffer, *((int*)buffer + 1));
	
	return 0;
}
