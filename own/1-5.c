#include <stdio.h> 
#include <math.h>

int pot(int a, int b) {
    return expf(b * log(a));
}

int main(void) {

    int res = pot(3,3);
    printf("Result: %d\n", res);    
        
        
    
    return 0; 
}