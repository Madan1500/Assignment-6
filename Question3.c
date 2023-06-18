#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter how many odd number sum you want on screen: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(2*i-1);

    }
    printf("%d",s);
    return 0;
}
