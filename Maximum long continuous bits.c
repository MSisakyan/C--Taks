/******************************************************************************
The input to the program is an unsigned 32-bit integer N and a natural number K (1 ≤ K ≤ 31).
It is required to take K consecutive bits of the number N so that the resulting number is maximum.
The program should print the resulting number.
*******************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned n, k, m, max=0;
    
    scanf("%u %u", &n, &k);
    
    k = 32 - k;
    
    for(int i=0;i<31;i++){
        
        m = n << k;
        m = m >> k;
        if(m > max){
            max = m;
        }
        n = n >> 1;
    }
    printf("%u", max);
    
    return 0;
}