#include <stdio.h>

#define ARRAY_SIZE(arr)     (sizeof(arr) / sizeof((arr)[0]))

#define DEBUG 1

/*
 * trivialSolution(int list[], int arrayLen, int k)
 *
 * Lookings through the array list to determine if any
 * two values add up to provided k, returning true or false
 *
 * O(n^2)
 *
 * Args:
 *  list: Array of integers to look over
 *  arrayLen: Length of the list provided
 *  k: The value k to check for.
 *
 *  return: 0 if false, 1 if true
 */
int trivialSolution(int list[], int arrayLen, int k)
{
    int i,j;

    if (DEBUG) printf("arrayLen = %d\n", arrayLen);
    for (i = 0; i < arrayLen; i++)
    {
        for (j = 0; j < arrayLen; j++)
        {
            if (i == j) continue;

            if (DEBUG) printf("%d + %d = %d\n", list[i], list[j] ,list[i] + list[j]);

            if (list[i] + list[j] == k)
            {
                printf("Solution: %d + %d = %d\n", list[i], list[j], k);
                return 1;
            }
        }
    }
}

int main()
{
    // Problem specs
    int k = 17;
    int list[] = {10,15,3,7};
    int arrayLen = ARRAY_SIZE(list);

    trivialSolution(list, arrayLen, k);
}
