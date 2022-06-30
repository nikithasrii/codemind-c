#include<stdio.h>
int main()
{
    int n,i=1,l=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(n==i*(i+1))
        l++;
    }
    if(l==1)
    printf("YES");
    else
    printf("NO");
}