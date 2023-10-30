#include <iostream>
#include <cstdlib>

using namespace std;

double max(double x, double y)
{
    if (x < y) {
        return x;
    }
    return x;
}

double min(double x, double y)
{
    if (x > y) {
        return y;
    }
    return x;
}
bool thc(double x, double y, double z, double w, double a, double b)
{
    double k, c;

    if (z == x) {
        return (a == x && b >= min(y, w) && x <= max(y, w));
    }

    k = (w - y) / (z - x);
    c = y - k * x;

    return b == a * k + c;
}