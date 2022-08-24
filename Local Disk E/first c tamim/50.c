#include <stdio.h>
int main ()
{
    double loan_amount, interest_rate, number_of_years, total_amount, monthly_amount;

   printf ("enter the loan amount:");
        scanf ("%if", & loan_amount);
    printf ("enter the amount rate:");

    scanf ("%if", &interest_rate);
    printf ("number of years:");
    scanf ("%if", & number_of_years);

    total_amount= loan_amount + loan_amount* interest_rate/100;
    monthly_amount = total_amount/ (number_of_years * 12);

    printf ("monthly amount: %0.21f/n", total_amount);
    printf ("monthly amount: % 0.2if/n", monthly_amount);

    return 0;
}
