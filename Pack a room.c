/******************************************************************************
The program is supplied with 4 unsigned 8-bit integers: a, b, c, d.
It is required to construct such an unsigned 32-bit number X that its lower 8 bits are equal to a,
the next 8 bits are the number b, the next 8 bits are the number c,
and finally the upper 8 the bit is the number d. The program should output the desired number X.
*******************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned a, b, c, d, x = 0;
    scanf("%u%u%u%u", &a, &b, &c, &d);
    x += d;
    x = x << 8;
    x += c;
    x = x << 8;
    x += b;
    x = x << 8;
    x += a;
    printf("%u", x);
    
    return 0;
}