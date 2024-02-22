/******************************************************************************
The input to the program is an unsigned 32-bit integer N and a natural number K (1 ≤ K ≤ 31). 
It is required to cyclically shift the bits of the number N to the right by
K bits and output the resulting number.
*******************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned N, K;
    
    scanf("%u %u", &N, &K);
    
    for(int i=1;i<=K;i+=1)
    {
        if (N % 2 == 1)
        {
            N = N >> 1;
            N += 2147483648;
        }
        else{
            N = N >> 1;
        }
    }
    printf("%u", N);
    return 0;
}