#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    double res;
    n = 1;
    res = 0;
    while (n <= 1000)
    {
        res += pow((-1), n) * 1.0 / (pow(n, 3) * 2);
        n++;
    }
    cout << round(res * 10000) / 10000;

    return 0;
}
