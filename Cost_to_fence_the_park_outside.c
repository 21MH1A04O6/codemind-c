#include<stdio.h>
int main()
{
    int l,b,w,c,l1,b1,f;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    l1=l+2*w;
    b1=b+2*w;
    f=((l1*b1)-(l*b))*c;
    if(l1<=0 || b1<=0)
    printf("impossible");
    else
    printf("%d",f);
}