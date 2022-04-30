#include<stdio.h>
 main()
{
    int n,s=0,r,t;
    scanf("%d",&n);
    t=n*n;
    while(t>0)
    {
        r=t%10;
        s+=r;
        t=t/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}