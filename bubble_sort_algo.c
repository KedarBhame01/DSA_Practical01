/* Set A
    a) Sort a random array of n integers (accept the value of n from user) in ascending order by using bubble sort algorithm.
*/
#include<stdio.h>
void main(){
    int n,temp;
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
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[j+1]<a[j]){
                    //swap
                    temp = a[j+1];
                    a[j+1]= a[j];
                    a[j]= temp;

                }
            }
        }
        printf("\n");
    printf("After\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}