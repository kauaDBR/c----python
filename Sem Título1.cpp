#include <stdio.h>
#include <stdlib.h>


int main()
{
    char c = 'a';
    int x = 5;
    float f = 5.25;
    double d = 15.673;
    double y = 5.0e10;
    
    int numeros[5] = {1, 2, 3, 4, 5};
    for(size_t i = 0; i < 4; i++ )
    {
    	printf("%d \n", numeros[i]);
	}
	printf("o valor � c =%c \n", c);
	printf("o valor � x =%d \n", x);
	printf("o valor � f =%f \n", f);
	printf("o valor � d =%f \n", d);
	printf("o valor � y =%e \n", y);
}
