#include <stdio.h>

int main()
{
    int age;
    char grade;
    float gpa;

    scanf("%d", &age);
    scanf(" %c", &grade);
    scanf("%f", &gpa);
    printf("%d %c %.6f\n", age, grade, gpa);

    return 0;
}
