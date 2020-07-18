#include <stdio.h>
#include <iostream>

using namespace std;

int subtractor(int, int);

int main(){
    int q, a, b, c;

    cin >> q;

    while (q--){
        cin >> a >> b;
        cout << subtractor(a,b) << endl;
    }
}

int subtractor(int a, int b){
    if(a == 0)
        return 0;
    else
        return subtractor(b%a, a) + b/a;
}