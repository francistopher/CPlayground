#include <stdio.h>
#include <stdlib.h>

int main(void) {
    struct students_gpa {
        int num;
        double d[];
    };

    // struct students_gpa harvard = {0}; // playing with the devil
    //    struct students_gpa princeton = {1, {4.2}}; // flexible array ignored

    // okay sizeof(double) == 8 is true

    struct students_gpa *ut = malloc(sizeof(struct students_gpa) + 64); // d[8]
    struct students_gpa *ucberkeley = malloc(sizeof(struct students_gpa) + 40); // d[5]

    ut = malloc(sizeof(struct students_gpa) + 10); // d[1] + 2 bytes
    double *dp = &(ut->d[0]); // obtains the memory address of the double at index 0 and assigns it to pointer dp

    *dp = 42; // reassign the value at memmory location dp
    //ut -> d[1]++; // not cool bro


    //ucberkeley = malloc(sizeof(struct students_gpa) + 6); // not cool bro, two bytes missing for double

    dp = &(ucberkeley->d[0]); // cool
    //*dp = 42; // not cool for some reason

    *ut = *ucberkeley; // only num copied, copies d elements within sizeof students_gpa

    return 0;

}
