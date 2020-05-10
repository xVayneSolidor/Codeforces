#include <stdio.h>
#include <iostream>

using namespace std;

bool clockspin(int [], int);

int main(){

    int arr[205], q, n;

    cin >> q;

    while(q--){
        cin >> n;

        for(int i = 0; i < n; i++)
            cin >> arr[i];
        
        if(clockspin(arr, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }  
}

bool clockspin(int arr[], int n){

    bool left = true, right = true;
    int pos;

    for(int i = 0; i < n; i++)
        if(arr[i] == 1) pos = i;

    for(int j = 0; j < n; j++){
        left &= (arr[((pos - j) + n) % n] == j + 1);
        right &= (arr[((pos + j) + n) % n] == j + 1);
    }

    return (left || right);
}