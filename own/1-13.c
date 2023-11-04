#include <stdio.h> 
#include <math.h> 

double delta(double a, double b, double c) {
    return b * b - (4 * a * c); 
}

int option(double delta) {
    if(delta < 0) return -1; 
    if(delta == 0) return 0; 
    return 1; 
}

void result(double a, double b, double c, int option, double delta) {
    if(option == -1) printf("Brak rozwiązań\n");
    if(option == 0)  printf("x = %2.f",  ((-b) / (2 * a)));
    if(option == 1) {
        double x1 = ((-b) - sqrt(delta)) / (2 * a); 
        double x2 = ((-b) + sqrt(delta)) / (2 * a);
        printf("x1 = %2.f\nx2 = %2.f\n", x1, x2); 
    } 
}

int main(void) {
    int a = 1;
    int b = 2;
    int c = -3;

    double d = delta(a,b,c);
    int o = option(d);

    result(a,b,c,o,d);    
    
    
    return 0;
}