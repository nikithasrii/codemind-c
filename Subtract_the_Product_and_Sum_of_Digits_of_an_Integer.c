#include<stdio.h>
int main()
{
    int n,r,s=1,a=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s*=r;
        a+=r;
        n=n/10;
    }
    printf("%d",s-a);
    return 0;
}