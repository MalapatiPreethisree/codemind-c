#include<stdio.h>
int main()
{
    int a,b; 
    scanf("%d%d",&a,&b); 
    int c; 
    c=21-a-b;
    if(c>0 && c<=10)
    {
        printf("%d",c);
        }
        else
        {
            printf("-1");
            }}