/* find the largest and smallest value from a list of 5 numbers */

#include <stdio.h>

int main() {
    int a[10],i,large,small ;
    printf("enter 5 numbers  \n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    large=a[0];
    small=a[0];
    for(i=0;i<5;i++){
        if(a[i]>large){
            large=a[i];
        }
        if(a[i]<small){
            small=a[i];
        }
    }
    printf("The largest number is  %d ",large );
    printf("\nthe smallest number is %d  ",small);
    
};
