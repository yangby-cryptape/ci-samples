#include <stdio.h>

extern int func (int flag) {
    flag *= 2;
    return flag > 0 ? 0 : 1;
}

extern int func2 (int a, int b) {
    int c = a + b;
    int d = a - b;
    int e = c * d;
    return c + d + e;
}

#define run_func(flag) \
    printf("func(%d) = %d\n", flag, func(flag))

int main (int argc, char *argv[])
{
    run_func(-1);
    run_func(1);
    printf("func(%d) = %d\n", 0, func(0));
    return 0;
}
