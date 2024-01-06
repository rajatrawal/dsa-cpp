#include <iostream>
#include <vector>
using namespace std;

float divide(long dividend, long divisor, int presicion = 0)
{
    long a = dividend, b = divisor;
    if (dividend < 0)
    {
        dividend = dividend * -1;
    }
    if (divisor < 0)
    {
        divisor = divisor * -1;
    }

    long start = 0;
    long end = dividend;
    long mid, element;
    long ans = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        element = mid * divisor;
        if (element > dividend)
        {
            end = mid - 1;
        }
        else if (element <= dividend)
        {
            ans = mid;
            start = mid + 1;
        }
    }
    double finalAnswer;
    double step = 0.1;
    for (int i = 0; i < presicion; i++)
    {
        for (double j = ans; j * divisor <= dividend; j += step)
        {

            finalAnswer = j;
        }
        step /= 10;
    }

    int max_int = 2147483647;

    if (a * b < 0)
    {
        finalAnswer = finalAnswer * -1;
    }

    if (finalAnswer > max_int)
    {
        finalAnswer = finalAnswer - (finalAnswer - max_int);
    }

    return finalAnswer;
}

int main(int argc, char const *argv[])
{
    cout << divide(-10, -3, 4) << endl;
    return 0;
}
