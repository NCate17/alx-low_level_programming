#include <stdio.h>

/* Program: 6-size.c
/* Description: Prints sizes of types in computer its compiled and run on.
/*  Author: Your Name
 */

int main(void)
{
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of float: %lu byte(s)\n", sizeof(float));
printf("Size of double: %lu byte(s)\n", sizeof(double));
printf("Size of long: %lu byte(s)\n", sizeof(long));
printf("Size of long long: %lu byte(s)\n", sizeof(long long));
printf("Size of unsigned int: %lu byte(s)\n", sizeof(unsigned int));
printf("Size of unsigned long: %lu byte(s)\n", sizeof(unsigned long));

return (0);
}

