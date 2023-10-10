
#include <bits/stdc++.h>

using namespace std;

int main(){
    // Range based loops
    vector<int> xd = {0, 1, 2, 3};
    for(int i: xd){
        cout << i << "\n";
    }

    int arr[] = {1,2,3};
    for(auto i: arr){
        cout << i << "\n";
    }

    string s = "hacker";
    for(char i: s){
        cout << i << "\n";
    }

    map<int, int> mp = {{1,2}, {3,4}};
    for(auto i: mp){
        cout << i.first << " " << i.second << "\n";
    }


}