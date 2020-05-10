#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n;
    int a = 0;

    cin >> n;

    while(n > 0){
        n -= 5;
        a++;
    }
     cout << a;
}