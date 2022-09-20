//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
 int a(int );
 int main()
 {
    int n1;
    printf("Enter a number : ");
    scanf("%d", &n1);
    a( n1);

    }
  int a(int x1)
 {

     if(x1%2==0)
     {
        printf("Given number is even =%d\n",x1);
     }
     else
    {
        printf("Given number is odd =%d\n",x1);
     }
        return(x1%2==0);
 }




