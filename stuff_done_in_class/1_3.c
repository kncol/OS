#include <stdio.h>

void main(){
    int items = 50;
    double each_cost = 9.99;
    printf("A total of %d items, each costing %.2f, equals %.2f\n", items, each_cost, items * each_cost);
}