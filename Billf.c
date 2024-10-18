#include <stdio.h>

void calculateElectricityBill() {
    // Introduce variables
    int CustomerID;
    float UnitsConsumed, bill, Totalbill, ChargesPerUnit;
    char CustomerName[50];

    // Prompt to enter Name
    printf("Enter CustomerName: ");
    scanf(" %[^\n]", CustomerName);
    
    // Enter the CustomerID
    printf("Enter CustomerID: ");
    scanf("%d", &CustomerID);
    
    // Enter amount of UnitsConsumed
    printf("Enter UnitsConsumed: ");
    scanf("%f", &UnitsConsumed);
    
    // Determine ChargesPerUnit based on UnitsConsumed
    if (UnitsConsumed <= 199) {
        ChargesPerUnit = 1.20;
    } else if (UnitsConsumed >= 200 && UnitsConsumed < 400) {
        ChargesPerUnit = 1.50;
    } else if (UnitsConsumed >= 400 && UnitsConsumed < 600) {
        ChargesPerUnit = 1.80;
    } else {
        ChargesPerUnit = 2.00;
    }
    
    // Calculate the bill
    bill = ChargesPerUnit * UnitsConsumed;

    // Determine Totalbill
    if (bill > 400) {
        Totalbill = bill + (0.15 * bill);
    } else if (bill < 100) {
        printf("Bill cannot be less than 100.\n");
        Totalbill = bill;
    } else {
        Totalbill = bill;
    }

    // Output of Totalbill
    printf("The bill is %.2f\n", bill);
    printf("The Totalbill is %.2f\n", Totalbill);
    
    // Display Customer information
    printf("CustomerName is %s\n", CustomerName);
    printf("CustomerID is %d\n", CustomerID);
    printf("UnitsConsumed is %.2f\n", UnitsConsumed);
    printf("ChargesPerUnit is %.2f\n", ChargesPerUnit);
    printf("Totalbill is %.2f\n", Totalbill);
}

int main() {
    calculateElectricityBill();
    return 0;
}
