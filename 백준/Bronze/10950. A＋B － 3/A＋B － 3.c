#include <stdio.h>

int main(void)
{
    int a,b;
    int n;
    int sum =0;
    scanf("%d",&n);
    for(int i =0; i<n; i++)
    {
       scanf("%d %d", &a, &b);
        sum = a+b;
       printf("%d\n",sum);
    }
    return 0;
}