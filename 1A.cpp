#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    double n, m, a, c;

    cin >> n >> m >> a;

    c = ceil(n/a) * ceil(m/a);

    cout << fixed << setprecision(0) << c;
}