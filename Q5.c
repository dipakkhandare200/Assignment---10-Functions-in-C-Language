//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
 void a(int);
 int main()
 {
    int n1,i=1;
    printf("Enter the value of N:\n");
    scanf("%d",&n1);
    a( n1);
    }
  void a(int x1)
 {
   int i=1;
    printf("Nth odd natural number are \n");
    while(i<=x1*2)
     {
     printf(" %d",i);
     printf(" \n");

     i+=2;
     }
 }

