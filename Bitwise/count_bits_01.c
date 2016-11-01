/* count integer bits */

#include <stdio.h>

// int count_bits(int n)
// {
//         int count;
//         while (n != 0){
//                 n = n & (n - 1);
//                 count++;
//         }
//         return count;
// }


int count_bits( int a)
{
        unsigned int v = a;     // count bits set in this (32-bit value)
        unsigned int c;         // store the total here
        static const int S[] = {1, 2, 4, 8, 16}; // Magic Binary Numbers
        static const int B[] = {0x55555555, 0x33333333, 0x0F0F0F0F, 0x00FF00FF, 0x0000FFFF};

        c = v - ((v >> 1) & B[0]);
        c = ((c >> S[1]) & B[1]) + (c & B[1]);
        c = ((c >> S[2]) + c) & B[2];
        c = ((c >> S[3]) + c) & B[3];
        c = ((c >> S[4]) + c) & B[4];

        return c;
}

int main()
{
        // 0b1100100
        int a = 100;

        // 0b11000011111010110
        int b = 100310;

        printf("count_bits(a): %d\n", count_bits(a) );
        printf("count_bits(b): %d\n", count_bits(b) );

        return 0;
}
