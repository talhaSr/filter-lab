#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float a = 1.0f, b = 2.0f;
    float c = (float)sqrt((double)b);

    printf("Test\n");
    printf("%f", c);

    return 0;
}