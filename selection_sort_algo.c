/* Set A
    c) Sort a random array of n integers (accept the value of n from user) in ascending order by using selection sort algorithm.
*/
#include<stdio.h>
void main(){
    // printf("Hi , My name is kedar ");
    int n;
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
        for(int i=0; i<n-1; i++){
            int min=i;
            for(int j=i+i; j<n; j++){
                if(a[j]<a[min]){
                    min=j;
                }
            }
            if(min!=i){
                int temp;
                temp = a[i];
                a[i]= a[min];
                a[min]= temp;
            }
        }
        printf("\n");
    printf("After\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
