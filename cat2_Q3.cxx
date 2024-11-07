//cat2_Q3
/*author:Mary
reg_no:CT101/G/23804/24
*/
#include <stdio.h>

int main() {
    float hours_worked, hourly_wage;
    float gross_pay, tax, net_pay;

    // Get user input for hours worked and hourly wage
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    // gross pay
    if (hours_worked > 40) {
        gross_pay = (40 * hourly_wage) + ((hours_worked - 40) * hourly_wage * 1.5);
    } else {
        gross_pay = hours_worked * hourly_wage;
    }

    //  tax
    if (gross_pay <= 600) {
        tax = gross_pay * 0.15;
    } else {
        tax = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }

    // net pay
    net_pay = gross_pay - tax;

    
  
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
