#include<stdio.h>
#define max 10

int main()
{
int a[max],k,i,n,flag=0,index;
printf("Enter n:");
scanf("%d",&n);

generate(a,n);
printf("Random elements are\n");
   for(i=0;i<n;i++)
      printf("%d\n",a[i]);

printf("Enter number to search: ");
   scanf("%d",&k);
linearsearch(a,n,k);
}
void generate(int a[],int n)
{
int i;
for(i=0;i<n;i++)
   a[i]=rand()%100;

}
void linearsearch(int a[],int n,int k)
{
int i,flag=0,index ;
for(i=0;i<n;i++)
if(a[i]==k)
{
flag=1;
index=i;
}
if(flag==1)
{
printf("Element found at index %d",index+1);
}
else
printf("Not Found");
}