#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t = 0, a, b;
    string s;

    cin >> n;
    cin >> s;

    b = count(s.begin(), s.end(), 'x');
    a = count(s.begin(), s.end(), 'X');

    if(a > n/2){
        for(int i = 0; i < n; i++){
            if(s[i] == 'X' && a > n/2){
                s[i] = 'x';
                a--;
                t++;
            }
        }
    }
    else if(b > n/2){
        for(int i = 0; i < n; i++){
            if(s[i] == 'x' && b > n/2){
                s[i] = 'X';
                b--;
                t++;
            }
        }
    }

    cout << t << '\n' << s;
}