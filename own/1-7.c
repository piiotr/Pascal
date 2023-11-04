#include <stdio.h> 


int mnozenie(int a, int b) {
    if(b == 1) return a;
    return mnozenie(a,b-1)+a;
    
}

int main(void) {

    int a = 5;
    int b = 6; 
    int res = mnozenie(5,6);
    printf("Wynik: %d\n", res);
    
     
    
    
    return 0;
}