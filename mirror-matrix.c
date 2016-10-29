#include<stdio.h>
void main()
 {
  int i=1,j=1,a[20][20];
  int m,n,b[20][20],k,l;
  scanf("%d%d",&m,&n);
  for(i=1;i<=m;i++)
   {
    for(j=1;j<=n;j++)
     {
      scanf("%d",&a[i][j]);
     }
   }
printf("mirror of above matrix..\n");
 for(i=1;i<=n;i++)
  {
   for(j=m;j>=1;j--)
    {
     
     printf("%d ",a[i][j]);
    }
  printf("\n");
  }
}
