#include <iostream>
#include <iomanip>
using namespace std;
double calculateDeciaml(double target, double ans, int decimal)
{
    double j;
    double step = 0.1;
    for (int i = 0; i < decimal; i++)
    {
        for (j = ans; j * j < target;j=ans+step)
        {
            ans = j;
        }
        step /= 10;
    }
    return ans;
}

double squareRoot(int target, int decimal=0)
{
    int start = 0;
    int end = target;
    int projectedSquare;
    int mid, ans = 0;
    int j = 0;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        projectedSquare = mid * mid;
        // cout << "start : " << start << endl;

        // cout << "target : " << target << endl;
        // cout << "mid : " << mid << endl;
        // cout << "projected square : " << projectedSquare << endl;
        if (target == projectedSquare)
        {

            return mid;
        }
        else if (projectedSquare > target)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }

    return calculateDeciaml(target,ans,decimal);
}

int main()
{
    double sqrt = squareRoot(15,12);
    cout << fixed << setprecision(15) <<sqrt;
    return 0;
}
