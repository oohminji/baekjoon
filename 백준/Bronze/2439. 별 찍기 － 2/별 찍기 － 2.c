#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    for(int i =0; i<N; i++)
    {
        
        for(int j =N-1; j>i ; j--)
        {
            printf(" ");
            
        }
        for(int k = 0; k < i+1; k++)
        {
            printf("*");     
        }
        printf("\n");
    }
    return 0;
}