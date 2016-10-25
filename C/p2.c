#include <stdio.h>
int main (int argc, char **argv)
{
    const unsigned int MAX = 4000000;
    unsigned int sum = 2;
    unsigned int c = 3;
    unsigned int b = 2;
    unsigned int a = 1;
    unsigned int temp;
    while (c < MAX) {
	temp = b;
	c += b;
	b += a;
	a = temp;
	printf("%d ", c);
	if (c % 2 == 0)
	    sum += c;
    }
    printf("\n%d\n", sum);
    return sum;
}
