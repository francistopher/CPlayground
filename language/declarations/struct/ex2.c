#include <stdio.h>


int main(void)
{
    struct venom {
        union { // anonimo
            struct { int temp, viscocity; }; // anonimo
            struct { long freezing_temp, boiling_temp; } wow;
        };
        int acidic;
    } viper;

    viper.temp = 30; // cool
    // viper.boiling = 200; // not cool bro
    viper.wow.boiling_temp = 200; // cool

    return 0;
}

