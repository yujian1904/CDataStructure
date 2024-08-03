#include <stdio.h>
#include <stdlib.h>
struct test
{
    int dig;
};

int main()
{
    struct test *a;
    struct test b;
    a = &b;

    int num = 11;
    int *p = &num;
    if (a->dig = *p)
    {
        printf("xiagndeng ");
    }

    return 0;
}