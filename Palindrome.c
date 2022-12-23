#include<stdio.h>
int main()
{
    int n,r=0,re,a;
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        re=n%10;
        r=r*10+re;
        n=n/10;
    }
    if(a==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}