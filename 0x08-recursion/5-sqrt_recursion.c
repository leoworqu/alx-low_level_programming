#include "main.h"

int sqrt_helper(int n, int start, int end);

int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0 || n == 1)
        return n;
    else
        return sqrt_helper(n, 0, n);
}

int sqrt_helper(int n, int start, int end)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;
        int square = mid * mid;

        if (square == n)
            return mid;
        else if (square > n)
            return sqrt_helper(n, start, mid - 1);
        else
            return sqrt_helper(n, mid + 1, end);
    }

    return end;
}
