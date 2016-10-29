#include<string.h>
#include<stdio.h>
 char name[100][100],des[100][100];
 int q=1,a,i=1,x,id[100],n,y,j,sal[100];
  void rem();
  void read();
  void print();
  void modify();

 void main()
  {
  
 while(q)
  {
   printf("1.Enter data\n2.Print data\n3.Insert data at middle\n4.Delete data\n5.Exit\n");
   printf("Enter your choice:\n");
   scanf("%d",&x);
   switch(x)
    { 
     case 1:read();
            break;
     case 2:printf("******************************************\n");
            printf("ID\tNAME\tDESIGNATION\tSALARY\n");
             print();
            break;
     case 3:modify();
            break;
     case 4:rem();
            break;
     case 5:q=0;
            break;
    }
  }
 }
  void read()
   {
   printf("how many employees:\n");
   scanf("%d",&n);
   for(;i<=n;i++)
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
  }
  
 void print()
  {
   for(j=1;j<=n;j++)
    {
     printf("%d\t%s\t%s\t\t%d\n",id[j],name[j],des[j],sal[j]); 
    }
   printf("******************************************\n");
  }
  
 void modify()
  {
   int m;
   printf("\nEnter where u want to insert new data:\n");
   scanf("%d",&a);
   for(m=n;m!=a-1;m--)
    {
     id[m+1]=id[m];
     strcpy(name[m+1],name[m]);
     strcpy(des[m+1],des[m]);
     sal[m+1]=sal[m]; 
    }
   printf("enter values at %d position:\n",a);
   m=m+1;
   n=n+1;
   printf("\nenter id:\n");
     scanf("%d",&id[a]);
    printf("enter name:\n");
     scanf("%s",name[a]);
    printf("enter designation:\n");
     scanf("%s",des[a]);
    printf("enter salary:\n");
     scanf("%d",&sal[a]);
}

void rem()
  {
   int m;
   printf("\nEnter position to delete data:");
   scanf("%d",&a);
   for(m=a;m<=n;m++)
    {
     id[m]=id[m+1];
     strcpy(name[m],name[m+1]);
     strcpy(des[m],des[m+1]);
     sal[m]=sal[m+1]; 
    }
  n=n-1;
 }
