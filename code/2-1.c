#include <stdio.h>

int main()
{
    char a = 'a';
    short b = 100;
    int c = 100;
    unsigned int d = 100;
    long e = 100;
    long long f = 100;
    float g = 3.14;

    printf("char: %u\n", sizeof(a));
    printf("short: %u\n", sizeof(b));
    printf("int: %u\n", sizeof(c));
    printf("unsigned int: %u\n", sizeof(d));
    printf("long: %u\n", sizeof(e));
    printf("long long: %u\n", sizeof(f));
    printf("float: %u\n", sizeof(g));

    return 0;
}
