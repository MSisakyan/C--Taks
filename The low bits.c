/******************************************************************************
The program is supplied with an unsigned 32-bit integer N and a natural number K (1 ≤ K ≤ 31).
It is required to take the K least significant bits of the number N 
and output the number obtained in this way.
*******************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned n, k;
    scanf("%u %u", &n, &k);
    printf("%u", ((n << (32-k)) >> (32-k)));
    
    return 0;
}