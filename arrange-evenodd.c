#include<stdio.h>
void main()
 {
  int a[100],d[100],b[100],c[100];
  int n,i=1,j=1,k=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);

  for(i=1;i<=n;i++)
   {
     if(a[i]%2==0)
      {
        b[j]=a[i];
        j++;
      }
     else
      {
       c[k]=a[i];
       k++;
      }
    }
    for(i=1;i<=j;i++)
     {
      d[i]=b[i];
     }
    for(i=1;i<=k;i++)
     {
      d[j]=c[i];
      j++;
     }
   for(i=1;i<=n;i++)
     {
      printf("%d ",d[i]);
      }
  }
