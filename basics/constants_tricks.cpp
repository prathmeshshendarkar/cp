#include <bits/stdc++.h>

using namespace std;

int maxi();
int mini();

int main(){
    int x = maxi();
    cout << x << "\n"; // INT_MAX has a value equals to 2147483647 value.

    int y = mini();
    cout << y << "\n";  // INT_MIN has a value equals to -2147483647 value.
}


int maxi(){
    return INT_MAX;
}

int mini(){
    return INT_MIN;
}