#include<stdio.h>
main()
{
    int rubel[1000],i,n;
    double sum=0,avg=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&rubel[i]);
        sum+=rubel[i];
        avg=sum/i;
        printf("%.10lf\n",avg);
    }
}
