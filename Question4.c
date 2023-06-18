//Write a program to calculate sum of squares of first Natural numbers
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number till which sum of squares of number is needed: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(i*i);
    }
    printf("The sum is %d",s);
    return 0;

}
