//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n,m=1;
    printf("Enter which number's factorial you want: ");
    scanf("%d",&n);
    for(i=n;i>=2;i--)
    {
        m=m*i;
    }
    printf("%d!=%d",n,m);
    return 0;
}
