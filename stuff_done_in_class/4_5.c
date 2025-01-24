#include <stdio.h>
#include <stdlib.h>

struct House
{
    char address[50];
    char square_feet[50];
    int bedrooms;
    int bathrooms;
    double price;
};

int main(){

    struct House house1 = {"Cheap Dr.", "2000 Sqaure Feet", 3, 3, 2.0};
    struct House house2 = {"Rich Ave.", "100 Square Feet",1,1, 100000000.9999};
    struct House house3 = {"Cool Street", "Cool Square Feet", 100,100, 20000.123456789};

    printf("%s %s  %d  %d %.2f \n", house1.address, house1.square_feet, house1.bedrooms, house1.bathrooms, house1.price);
    printf("%s %s  %d  %d %.2f \n", house2.address, house2.square_feet, house2.bedrooms, house2.bathrooms, house2.price);
    printf("%s %s  %d  %d %.2f \n", house3.address, house3.square_feet, house3.bedrooms, house3.bathrooms, house3.price);

    return 0;
}
