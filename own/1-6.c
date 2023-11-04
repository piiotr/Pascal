#include <stdio.h> 


int silnia(int a) {
    if(a < 2) return 1;
    return silnia(a - 1) * a;
}

int main(void) {

    int res = silnia(5);    
    printf("Wynik: %d\n", res);
    
    
    return 0;
}