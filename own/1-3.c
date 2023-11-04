
#include <stdio.h> 

int nwd(int a, int b) {
    if(a % b == 0) return b;

    int remainder = -1; 
    while(remainder != 0) {
        remainder = a % b; 
        if(remainder == 0) return remainder + b; 
        a = b; 
        b = remainder;
    }

    return remainder;
     
}
int nww(int a, int b) {
    return (a*b)/nwd(a,b);
}

int main(void) {
    int first_number; 
    int sec_number;

    printf("First number:  ");
    scanf("%d", &first_number);

    printf("Second number: ");
    scanf("%d", &sec_number);

    int result = nww(first_number, sec_number);
    printf("Result: %d\n", result);



    return 0; 
}