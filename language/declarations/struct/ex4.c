#include <stdio.h>
#include <stddef.h>

int main(void)
{
    struct automobile {
        char *make;
        char *model;
        int *year;
    };

    struct automobile christophers_car = {
        .year = 2014,
        .make = "Honda",
        .model = "Civic LX"
    };
    printf("My ride: %d %s %s\n", christophers_car.year, christophers_car.make, christophers_car.model);

}
