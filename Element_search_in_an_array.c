#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n); 
    int a[n],c=0,i; 
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
        }
        int s;
        scanf("%d",&s); 
        for(i=0;i<n;i++)
        {
            if(a[i]==s)
            {
                c++;
                } }
                if(c>0)
                {
                    printf("True");
                    }
                    else
                    {
                        printf("False");
                        }}
