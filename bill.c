
     #include<stdio.h>

int main()
{
    char name[20];
    int id;
    int units;

    float bill;
    float tax;
    float finalBill;

    printf("=========== ELECTRICITY BILL SYSTEM =======\n");

    printf("Consumer Name: ");
    scanf("%s", name);

    printf("Consumer ID: ");
    scanf("%d", &id);

    printf("Used Units: ");
    scanf("%d", &units);

    /* Bill Calculation */

    if(units <= 100)
    {
        bill = units * 2;
    }
    else if(units <= 200)
    {
        bill = (100 * 2) + ((units - 100) * 5);
    }
    else
    {
        bill = (100 * 2) +
               (100 * 5) +
               ((units - 200) * 8);
    }

    /* Tax Calculation */

    tax = bill * 0.18;

    /* Final Bill */

    finalBill = bill + tax;

    /* Output */

    printf("\n=========== BILL DETAILS ===========\n");

    printf("Customer Name : %s\n", name);
    printf("Customer ID   : %d\n", id);
    printf("Units Used    : %d\n", units);

    printf("Bill Amount   : %.2f\n", bill);
    printf("Tax (18%%)     : %.2f\n", tax);

    printf("------------------------------------\n");

    printf("Final Bill    : %.2f\n", finalBill);

    printf("====================================\n");

    return 0;
}
