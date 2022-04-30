#include<stdio.h>
main()
{
    int n,r,s=0,a=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s+=r;
        a*=r;
        n=n/10;
    }
    if(s==a)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}