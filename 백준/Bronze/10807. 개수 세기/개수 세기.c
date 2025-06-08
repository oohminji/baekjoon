#include <stdio.h>

int main(void)
{
    int N;
    int v;
    int k=0;
    int a[100] = {0};
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &a[i]);
    }
    scanf("%d", &v);
    for (int j = 0; j < N; j++)
    {
        if (a[j] == v)
        {
            k++;
        }
     }
    printf("%d", k );
  
    return 0;
}