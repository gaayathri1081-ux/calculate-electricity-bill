#include <stdio.h>

int main()
{
    float unit, electricity_bill;

    printf("Enter your unit: ");
    scanf("%f", &unit);

    if (unit <= 200)
    {
        printf("Electricity Bill: Free\n");
    }
    else if (unit <= 400)
    {
        electricity_bill = unit * 4.70;
        printf("Electricity Bill: Rs. %.2f\n", electricity_bill);
    }
    else if (unit <= 500)
    {
        electricity_bill = unit * 6.30;
        printf("Electricity Bill: Rs. %.2f\n", electricity_bill);
    }
    else
    {
        electricity_bill = unit * 8.40;
        printf("Electricity Bill: Rs. %.2f\n", electricity_bill);
    }

    return 0;
}
