#include <stdio.h>

int main()
{
    int a;
    int b;
    char c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf(" %c", &c);

    if (c == '+') {
        printf("%d\n", a + b);
    } else if (c == '-') {
        printf("%d\n", a - b);
    } else if (c == '*') {
        printf("%d\n", a * b);
    } else if (c == '/') {
        printf("%d\n", a / b);
    }
    
    return 0;
}

