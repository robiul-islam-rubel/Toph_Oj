#include<stdio.h>
int main()
{
   int a[100000],i,n;
   double avg=0,sum=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
       sum=sum+a[i];
       avg=sum/i;

        printf("%.10lf\n",avg);
}
   }
