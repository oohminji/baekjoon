#include<stdio.h>

int main(void)
{
    int x,y;
    int result;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x > 0 && y > 0)
    {
        result = 1;
    }
    else if(x < 0 && y > 0)
    {
        result = 2;
    }
    else if(x < 0 && y < 0)
    {
        result = 3;
    }
    else
    {
        result = 4;
    }
    printf("%d",result);
    return 0;
}