#include <stdio.h>


int add(int a, int b){
    int result = a + b;
    return result;
}

int main(void){

    int r = add(4,5);
    printf("%d\n", r);
}