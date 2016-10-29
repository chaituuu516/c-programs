#include<stdio.h>
void prime(int);
long int s=0;
void prime(int x)
 {
  int f=0,i;
   for(i=2;i<=x/2;i++)
    {
     if(x%i==0)
      {
       f=1;
       break;
      }
    }
     if(f==0)
      {
      //printf("%d  ",x);
       s=s+x;
      }
 }
 void main()
  {
   long int j,n=2000000;
    for(j=2;j<=n;j++)
     prime(j);
 printf("\n%ld\n",s);  
}
