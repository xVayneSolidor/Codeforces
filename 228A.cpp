#include <stdio.h>
#include <set>
#include <iostream>
#include <sstream>

using namespace std;

int main(){
    set <int> s;
    int a, b, c, d;

    cin >> a >> b >> c >> d;
    
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);

    cout << 4 - s.size();
}