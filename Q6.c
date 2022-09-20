//Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
 int a(int);
 int main()
 {
    int n1;
    printf("Enter the value of factorial :\n");
    scanf("%d",&n1);
    a( n1);
    }
  int a(int x1)
 {
   int i=1,fact=1;
    printf("Nth factorial of  number are \n");
    while(i<=x1)
     {
        fact=fact*i;
        i++;

        }

     printf(" factorial of %d is a %d",x1,fact);
     printf(" \n");
     return(i<=x1);

 }
