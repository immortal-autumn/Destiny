#include <stdlib.h>
#include <stdio.h>
#include "print_MSG.c"

int main(void) {
    int number;
    printf("Please an integer less than %i: ", __INT_MAX__);
    if(scanf("%i", &number) == 0) {
        printf("\nPlease input a valid number.\n");
    }
    initialise(); 
    printf("%i", Qian.number);

    int i = 1;
    int* ip = &i;
    int** ip2 = &ip;
    void** vp = ip2;
    void* vp2 = vp;
    int result = (int)vp2; 
}