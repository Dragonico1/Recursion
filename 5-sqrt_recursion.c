#include "main.h"

int _sqrt_recursion(int n)
{
    if (n < 0) { 
        return -1;
    } else if (n == 0 || n == 1) { 
        return n;
    } else {
        return sqrt_helper(n, 1); 
    }
}

int sqrt_helper(int n, int guess)
{
    if (guess * guess == n) { 
        return guess;
    } else if (guess * guess > n) { 
        return -1;
    } else {
        return sqrt_helper(n, guess + 1); 
    }
}
