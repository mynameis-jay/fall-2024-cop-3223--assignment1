#include <stdio.h>
#include <math.h>

#define PI 3.14159

double calculateDistance() {
    double x1, y1, x2, y2, dist;

    printf("Point #1:");
    printf("Enter X #1: ");
    scanf("%lf", &x1);
    printf("Enter Y #1: ");
    scanf("%lf," &y1);
    printf("Point #2:");
    printf("Enter X #2: ");
    scanf("%lf", &x2);
    printf("Enter Y #2: ");
    scanf("%lf," &y2);

    printf("The distance between the two points is %.2lf", dist);

    return dist;
}

double calculatePerimeter() {
    double dist = calculateDistance();
    double rad = (dist / 2);
    double rim = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The perimeter of the city encompassed by your request is %.2lf", rim);

    return rim;
}

double calculateArea() {
    double dist = calculateDistance();
    double rad = (dist / 2);
    double area = PI * pow(rad, 2);
    printf("The perimeter of the city encompassed by your request is %.2lf", area);

    return area;
}

double calculateWidth() {
    double dist = calculateDistance();
    printf("The width of the city encompassed by your request is %.2lf", dist);

    return dist;
}

double calculateHeight() {
    double dist = calculateDistance();
    printf("The height of the city encompassed by your request is %.2lf", dist);

    return dist;
}

int main(void) {
    calculatePerimeter();
    calculatePerimeter();
}