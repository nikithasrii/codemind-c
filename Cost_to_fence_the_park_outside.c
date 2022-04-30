#include<stdio.h>
#include<math.h>
int main()
{
    int L,B,W,C,l,b,a,tc;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if(L<=W-W||B<=W-W)
    {
        printf("impossible");
    }
    else
    {
        a=L*B-((L+2*W)*(B+2*W));
        tc=abs(a*C);
        printf("%d",tc);
    }
    return 0;
}