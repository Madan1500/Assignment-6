#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Not a Prime");
    else
        printf("Prime");

    return 0;

}


