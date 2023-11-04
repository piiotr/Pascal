#include <stdio.h> 

int first_number = 0; 
int second_number = 1; 
int pair = 0; 
int result = 0; 
int number = 5; 
// 0, 1, 1, 2, 3, || 5, 8, 13, 21, 34, 55, 89, 144 .

int main(void) {
    while(number != 0) {
        pair += first_number;
        result += first_number;
        --number;
        if(number == 0) break;

        pair += second_number;
        result += second_number;
        --number;
        if(number == 0) break;

        first_number = pair;
        second_number = second_number + pair;
        pair = 0;
    }  

    printf("Wynik %d\n", result);  
} 