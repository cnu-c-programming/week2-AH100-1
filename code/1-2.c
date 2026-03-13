#include <stdio.h>
int main()
{
    printf("%10s", "name");
    printf("%11s", "id");
    printf("%11s\n", "value");
    printf("%10s", "kim");
    printf(" %010d", 12);
    printf("%11.2f\n", 4.12);
    printf("%10s", "lee");
    printf(" %010d", 1922);
    printf("%11.2f\n", 3.21);
    printf("%10s", "park");
    printf(" %010d", 432);
    printf("%11.2f\n", 1.00);
    
    return 0;
}