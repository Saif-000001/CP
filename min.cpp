#include <bits/stdc++.h>
using namespace std;

double factorial(int i)
{
    if (i == 0)
        return 1;
    return i * factorial(i - 1);
}
void calculate(double radian, double *ans)
{
    double sinx = 1;

    for (int i = 1; i <= 7; i += 2)
    {
        *ans += sinx * (pow(radian, i) / factorial(i));
        sinx *= -1;
    }
}

int main()
{
    int x;
    double radian, result = 0;
    cin >> x;
    // x = 30;
    radian = x * (3.14159 / 180.0);
    calculate(radian, &result);
    cout << "Sin" << x << "= " << result << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;


double factorial(int i)
{
    if (i == 0)
        return 1;
    return i * factorial(i - 1);
}
void calculate(double radian, double *ans)
{
    double sinx = -1;

    for (int i = 0; i <= 7; i += 2)
    {
        sinx= sinx * (-1) *(pow(radian, i) / factorial(i));
        *ans+=sinx;
    }
}

int main()
{
    int x;
    double radian, result = 0;
    cin >> x;
    // x = 30;
    radian = x * (3.14159 / 180.0);
    calculate(radian, &result);
    cout << "Sin" << x << "= " << result << "\n";

    return 0;
}

