#include<stdio.h>
char name[100][100],des[100][100];
int i,id[100],n,j,sal[100];
void read();
 void pr();

 void main()
  {
   printf("how many employees:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    printf("\nenter %d employee's details:",i);
   read();
   }
   printf("\n*********************************************************************\n");
   printf("id\tname\tdesignation\tsalary\n");
    pr();
   printf("*********************************************************************\n");
 }
 
  void read()
   {
    printf("enter id:\n");
     scanf("%d",&id[i]);
    printf("enter name:\n");
     scanf("%s",name[i]);
    printf("enter designation:\n");
     scanf("%s",des[i]);
    printf("enter salary:\n");
     scanf("%d",&sal[i]);
   }
  
 void pr()
  {
   for(j=1;j<=n;j++)
    {
     printf("%d\t%s\t%s\t\t%d\n",id[j],name[j],des[j],sal[j]); 
   }
  }
