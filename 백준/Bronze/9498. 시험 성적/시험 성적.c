#include<stdio.h>

int main(void)
{
    int score;
    scanf("%d",&score);
    if(score<=100 && score>=90)
    {
        printf("%c",'A');
    }
    else if(score>=80)
    {
        printf("%c",'B');
    }
    else if(score>=70)
    {
        printf("%c",'C');
    }
    else if(score>=60)
    {
        printf("%c",'D');
    }
    else
    {
        printf("%c",'F');
    }
    return 0;
}