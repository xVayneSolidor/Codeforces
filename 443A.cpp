#include <stdio.h>
#include <set>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    set <char> s;

    getline(cin, a);

    for(int i = 0; i < a.length(); i++)
        s.insert(a[i]);
    if(s.size() == 3)
        cout << 1;
    else if(s.size()<= 2)
        cout << 0;
    else
        cout << s.size() - 4;
}