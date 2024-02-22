/******************************************************************************
The program is supplied with an unsigned 32-bit integer N.
It is required to change the values of all the bits of the highest byte of the 
number to the opposite ones and output the number obtained in this way.

Note: consider that there are 8 bits in a byte.
*******************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned n, x;
    scanf("%u", &n);
    x = n >> 24;
    x = ~x;
    x = x << 24;
    n = n << 8;
    n = n >> 8;
    n += x;
    printf("%u", n);
    return 0;
}