// /* Set B

// */
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// void main(){
//     FILE* ptr;
//     char ch;
//     int n=0,i=0;
//     ptr= fopen("employee.txt","r");
//     if(ptr == NULL){
//         printf("file is empty or may be open.\n");
//     }
//     do{
//         ch=fgetc(ptr);
//         n++;
        
//     }while(ch != EOF);
//     int a[n];
//     printf("value of n-%d\n",n);
//     do{
//         ch=fgetc(ptr);
//         if(ch !=' '){
//         printf("%c\t",ch);
//         a[i]=ch;
//         i++;
//         }
//     }while(ch != EOF);
//     fclose(ptr);
//         printf("\n");
//         printf("After\n");
//         for(int i=0;i<n/2;i++){
//             printf("%d\t",a[i]);
//         }
// }

#include<stdio.h>
typedef struct employee
{
    int age;
    char name[10];
}record;

record employee[100];

int readfile(record *a)
{
    int i=0;
    FILE *fp;
    if((fp=fopen("emp.txt","r"))!=NULL)
     {
      while(!feof(fp))
                {
                    fscanf(fp,"%d%s",&a[i].age,a[i].name);
                    i++;
                }
        }
                return(i);
}

void writefile(record *a,int n)
{
    int i=0;
    FILE *fp;
    if((fp=fopen("emp.txt","w"))!=NULL)
        {
            for(i=0;i<n;i++){
                fprintf(fp,"%d %s",a[i].age,a[i].name);
                if(i != n-1){
                    fprintf(fp,"\n");
                }
            }    
        }   
}

void bubble_sort(record *a,int n)
{
    int i,j; record t;
    for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
                {
                    if(a[j].age>a[j+1].age)
                        {
                            t=a[j];
                            a[j]=a[j+1];
                            a[j+1]=t;
                        }
                }
        }
}
void selection_sort(record *a,int n){
    int min;
    record t;
    for(int i=0; i<n-1; i++){
            int min=i;
            for(int j=i+i; j<n; j++){
                if(a[j].age<a[min].age){
                    min=j;
                }
            }
            if(min!=i){
                
                t = a[i];
                a[i]= a[min];
                a[min]= t;
            }
        }
}
void insertion_sort(record *a,int n){
    int j;
    record key;
    for(int i=1; i<n; i++){
            key=a[i];
            j=i-1;
            for(j=i-1;j>=0 && a[j].age>key.age;j--){
                a[j+1]=a[j];
                a[j]=key;
            }
            
        }
}

void main()
{
    int n;
    n=readfile(employee);
    // bubble_sort(employee,n);
    // selection_sort(employee,n);
    insertion_sort(employee,n);
    writefile(employee,n);
}