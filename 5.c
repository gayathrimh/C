#include <stdio.h>
#include <math.h>

int main(){
    double principle1=0;
    double annualRate1=0;
    double ctpy1=0;
    double years1=0;
    double totalAmount1=0;
    printf("Enter principle amount: ");
    scanf("%lf",&principle1);
    printf("Enter annual rate in percentage:");
    scanf("%lf",&annualRate1);
    printf("Enter compounding times per year:");
    scanf("%lf",&ctpy1);
    printf("Enter target years:");
    scanf("%lf",&years1);
    totalAmount1=principle1*pow((1+(annualRate1/100)/ctpy1),ctpy1*years1);
    printf("Total amount: %lf",totalAmount1);
    return 0;
}