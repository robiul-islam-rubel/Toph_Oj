#include<stdio.h>
main()
{
    int x,y,r,z;
    scanf("%d%d",&x,&y);
    r=x%y;
    z=x/y;
    printf("%d %d %d",z,r,y);
}
