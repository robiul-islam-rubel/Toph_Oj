#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&a,&b);
        int d=(a+b)/2;

        {
            if(d%2==0)
            {
                printf("Sadia will be happy.\n");
            }
            else
            {
                printf("Oops!\n");
            }
        }

    }
    return 0;
}
