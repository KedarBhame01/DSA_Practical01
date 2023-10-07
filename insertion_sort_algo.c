/* Set A
    b) Sort a random array of a integers (create a random array of n integers) in ascending order by using insertion sort algorithm.
*/
#include<stdio.h>
void main(){
    // printf("Hi , My name is kedar ");
    int n,key,j;
    printf("Enter the length of array. -\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d no element- \n",i);
        scanf("%d",&a[i]);
    }
        printf("Before\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
        for(int i=1; i<n; i++){
            key=a[i];
            j=i-1;
            while(j>=0 && a[j]>key){
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=key;
        }
        printf("\n");
    printf("After\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
