#include <stdio.h> 
#include <math.h>

int check(int a) {
    for(int i=3; i<a; i++) {
        if(a%i == 0) return 1; 
    }
    return 0; 
}    


int main(void) {
    int wynik = check(8);
    printf("Wynik: %d\n", wynik);

    
    
    
    
    return 0;
}