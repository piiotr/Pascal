#include <stdio.h>

void check(int* first, int* second) {
    if(*first < *second) {
        int temp = *first; 
        *first = *second;
        *second = temp;
    }
}

int nwd(int a, int b) {
    if(a % b == 0) return b;

    int remainder = -1; 
    while(remainder != 0) {
        remainder = a % b; 
        if(b%remainder == 0) return remainder;
        a = b; 
        b = remainder;
    }

    return remainder;
     
}

int main(void) {
    int first_number; 
    int sec_number;

    printf("First number:  ");
    scanf("%d", &first_number);

    printf("Second number: ");
    scanf("%d", &sec_number);

    int* pFirst = &first_number;
    int* pSec = &sec_number;

    check(pFirst, pSec);

    int res = nwd(first_number, sec_number);
    printf("Result: %d\n", res);

   return 0; 
    
}

