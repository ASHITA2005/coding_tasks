/* accept a number and print it reversed */
#include <stdio.h>
#include <math.h>
int main() {
    int rev,n,num,i=0 ;
    printf("enter the number ");
    scanf("%d",&n);
    printf("\n The number is %d",n);
    num=n;
    while (num){
        rev=rev* 10 + num%10 ;
        num=num/10;
        i++;
    }
    printf("\t the reversed number is %d",rev);
    
    
};
