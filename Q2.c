//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simple_intrest(float ,float,float);
int main()
 {
    float  amount, rate ,time,simpleintrest;
    printf("Enter the amount : \n");
    scanf("%f",&amount);
    printf("Enter the rate of intreset: \n");
    scanf("%f",&rate);
    printf("Enter the time in years: \n");
    scanf("%f",&time);
    simpleintrest= simple_intrest(amount,rate,time);
    printf(" simple interest = %f",simpleintrest);
    }
  float simple_intrest(float amount,float rate,float time )
 {
     float  simpleintrest;
     simpleintrest = amount*rate*time/100 ;
     return simpleintrest;

    }



