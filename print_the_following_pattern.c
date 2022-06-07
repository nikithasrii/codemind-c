#include<stdio.h>
int main()
{
    int N,out,in;
    scanf("%d",&N);
    for(out=N;out>=1;out--)
    {
        for(in=N;in>=1;in--)
        {
        printf("%d ",in);
        }
        printf("
");
    }
}