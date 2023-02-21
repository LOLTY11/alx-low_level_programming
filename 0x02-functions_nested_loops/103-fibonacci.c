#include <stdio.h>

/**
 * main - Prints the sum of Even fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
 */

int main(void)

}

        int i = 0;
        long j = i, k = 2, sum = k;

        while (k + j < 4000000)
        {
        k += j;
        j = k - j;                                              ++i;
        }
        printf("%d\n", sum);
        return (0);
}
