//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
 int lcm(int ,int);
 int main()
 {
    int n1, n2,ans;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    ans = lcm( n1,n2);
    printf("lcm of  %d & %d numbers=%d",n1,n2,ans);
    }
  int lcm(int x1,int x2)
 {
     int  i, gcd, lcm;
     for (i = 1; i <= x1 && i <= x2; ++i)
        {
        if (x1% i == 0 && x2 % i == 0)
            gcd = i;
    }
    lcm = (x1 * x2) / gcd;
    return lcm;
}


