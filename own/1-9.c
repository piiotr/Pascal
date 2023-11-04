#include <stdio.h> 

int met(int n) {
    if(n == 0) return 1; 
    if(n % 2 == 0) return (met(n/2)*(met(n/2)));
    return 2 * (met(n/2)*met(n/2));
}

int main(void) {

    printf("Wynik: %d\n", met(10));

    return 0;
}