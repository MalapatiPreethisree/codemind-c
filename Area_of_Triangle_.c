#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,d;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    d=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",d);
}