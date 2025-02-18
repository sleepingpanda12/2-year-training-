#include <stdio.h>
#include <string.h>

int main() {
    char vehicle_type[20];
    int distance;
    float base = 0.0, discount = 0.0, tax = 0.0;

    printf("Enter the type of vehicle (car/truck/bus):\n");
    scanf("%s", vehicle_type);
    printf("Enter the distance travelled (in km):\n");
    scanf("%d", &distance);

    // Set base charge based on vehicle type
    if (strcmp(vehicle_type, "car") == 0) {
        base = distance * 5;
    } else if (strcmp(vehicle_type, "truck") == 0) {
        base = distance * 10;
        if (distance > 500) {
            discount = base * 0.1;
        }
    } else if (strcmp(vehicle_type, "bus") == 0) {
        base = distance * 8;
        if (distance > 300) {
            discount = base * 0.05;
        }
    } else {
        printf("Invalid vehicle type entered.\n");
        return 1;
    }

    tax = base - discount;

    printf("\nToll Tax Calculation\n");
    printf("-------------------\n");
    printf("Type of vehicle: %s\n", vehicle_type);
    printf("Distance travelled: %d km\n", distance);
    printf("Base charges: ₹%.2f\n", base);
    printf("Discount: ₹%.2f\n", discount);
    printf("Tax: ₹%.2f\n", tax);

    return 0;
}
