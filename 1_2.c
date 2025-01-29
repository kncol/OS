
#include <stdio.h>
#include <math.h>
void convertFC(double F){
    printf("%.2f\n", (F - 32) * 5/9);
}
void area(double w, double h){
    printf("%.2f\n",w * h);
}

void circleArea(double r){
    double area = (3.14) * pow(r,2.0);
    printf("%.2f\n", area);
}

void main (){
    convertFC(100.0);
    area(10.0,12.0);
    circleArea(2.0);
}

