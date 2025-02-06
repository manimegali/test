#include<stdio.h>
int main()
{
    int N=365;
    int count=0;
    while(N>0)
    {
        N=N/10;
        count++;
    }
    printf("The number of digits is: %d", count);
    return 0;
}