/******************************************************************************
First-year teachers created a set containing N (1 ≤ N ≤ 1,000,000) natural numbers not exceeding 1,000,000. 
It is known that exactly one number in this set occurs exactly once, and the rest appear exactly twice.
Help teachers find this number.

Input data: the number N is entered in the first input line, 
then N natural numbers not exceeding 1,000,000 are entered, one number per line.

Output: Your program should identify a number that occurs once and print it to the screen.

Note: The use of arrays is prohibited.
*******************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned n, a, res;
    res = 0;
    scanf("%u", &n);
    for(int i=0;i<n;i++){
        scanf("%u", &a);
        res ^= a;
    }
    printf("%u", res);
    
    return 0;
}