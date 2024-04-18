//
// Created by Victor on 22/06/2023.
//
#include <stdio.h>

struct frac {
    int num;
    int den;
} f1, f2;

int main()
{
    f1 = f2;
    f1.num = 3/4;

    printf("%d", f1.num);
}

