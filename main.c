#include <stdio.h>

int foo(int* x){//do x sa prekopiruje adresa y z main()
    return *x;
}
int main() {
    int x = 10;
    int *y = &x;
    printf("%d", foo(y));
    return 0;
}
