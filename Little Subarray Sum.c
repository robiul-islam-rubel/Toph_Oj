#include<stdio.h>
int main()
{
    int n,sum=0,i,a,b;
    scanf("%d%d%d",&n,&a,&b);

    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
        for(i=a;i<=b;i++)

        {
            sum=sum+x[i];
        }

    printf("%d",sum);
}
