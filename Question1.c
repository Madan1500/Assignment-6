#include<stdio.h>
int main()
{
    int s=0,i,n;
    printf("Enter a number to calculate sum of that natural numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("%d",s);
    return 0;
}
