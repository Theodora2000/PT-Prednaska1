#include <stdio.h>

int foo(int x){
    return x+1;
}
int main() {
    int x = 10;
    printf("%d", foo(x));
    return 0;
}
