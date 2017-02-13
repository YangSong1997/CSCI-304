
#include<stdio.h>
int main()
{
    int i, NUMBER;
    int total = 0;
    printf("Please input a number:");
    scanf("%d",&NUMBER);
    for(i=1; i<=NUMBER; i=i+1)
    {
        printf("The square of %d is %d\n",i,i*i);
        total += i*i;
    }
    printf("The sum of the squares is %d\n",total);
    return 0;
    
}