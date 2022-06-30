#include<stdio.h>
int main()
{
    int n,m,sum=0,i,l=0,s=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=(n/2)+1;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    for(i=1;i<=(m/2)+1;i++)
    {
    if(m%i==0)
    s=s+i;
}
if(s==n&&sum==m)
printf("Amicable");
else
printf("Not Amicable");
return 0;
}