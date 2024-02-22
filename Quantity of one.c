/******************************************************************************
The program input is an unsigned 32-bit integer N.
It is required to find the number of unit bits in the binary representation of this number.
*******************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned N, c=0;
    
    scanf("%u", &N);
    
    while (N != 0)
    {
        if (N % 2 == 1){
            c++;
        }
        N = N >> 1;
    }
    printf("%u", c);
    return 0;
}