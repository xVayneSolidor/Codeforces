#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

bool oddSum(int, int);

int main(){
    int n, k, t;

    cin >> t;

    while(t>0){
        cin >> n >> k;

        if(oddSum(n,k))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        t--;
    }
}

bool oddSum(int n, int k){
    double a = k;
    
    if(pow(a,2) > n)
        return false;
    else if ((k%2) != (n%2))
        return false;
    else 
        return true;
}