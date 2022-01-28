#include<stdio.h>
int main()
{
    int l,b,w,c,le,br,f;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    le=l-2*w;
    br=b-2*w;
    f=((l*b)-(le*br))*c;
    if(le<=0 || br<=0)
     printf("Impossible");
     else
      printf("%d",f);
      
}