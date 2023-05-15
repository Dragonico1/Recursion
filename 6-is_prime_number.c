#include "main.h"

int Auxiliar(int n, int div)
{
    if (n < 2 || n % div == 0){
        return 0;
    } else if (div > n / 2){
        return 1;
    } else {
        return Auxiliar(n, div + 1);
    }
}


int is_prime_number(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    return Auxiliar(n, 2);
}