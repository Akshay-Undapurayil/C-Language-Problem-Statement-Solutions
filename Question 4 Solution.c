#include<stdio.h>

int main(){
    float radius,area,pie=3.14;
    printf("Enter the radius of Circle:");
    scanf("%f",&radius);
    area=pie*radius*radius;
    printf("Area of circle is %f having the radius %f",area,radius);
    return 0;
}