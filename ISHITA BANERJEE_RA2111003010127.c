/*  C Program to find the gross salary and net salary  */
#include <stdio.h>
int main(){
    float basic,da,hra,tax,pf,gross,net;
    char name[50];
    printf("Enter your Name: ");
    scanf("%[^\n]s",name);
    printf("Enter your Basic Salary: ");
    scanf("%f",&basic);
    pf = 0.08*basic;
    if (basic>=5000 && basic<10000) {
        da = 0.4*basic;
        hra = 0.1*basic;
    }
    else {
        da = 0.5*basic;
        hra = 0.2*basic;
    }
    gross = basic+da+hra;
    net = gross-tax+pf;
    printf("The gross salary is: %.2f\n",gross);
    printf("The net salary is: %.2f",net);
    return 0;
}