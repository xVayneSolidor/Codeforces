#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    unsigned long long x, y, a, b, c;
    int t;

    cin >> t;

    while (t > 0){
        cin >> x >> y;
        cin >> a >> b;

        if (x >= y){
            if(x == 0 && y == 0)
                cout << 0 << endl;
            else if (a * 2 <= b)
                cout << (x + y) * a << endl;
            else if (a * 2 >= b)
                cout<< y * b + (x - y) * a << endl;     
        }
        if(x < y){
            b = min(b, a + a);
            c = x;
            x = y;
            y = c;
            cout << y * b + (x - y) * a << endl;
        }
        t--;
    }
}