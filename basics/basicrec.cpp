#include <bits/stdc++.h>

using namespace std;

vector<int> printnnos(int x);
vector<int> nto1(int x);
void checkfactorialslessthann(long long sums, long long i, long long n, vector<long long> &ans);
vector<long long> factorialNumbers(long long n);

int main(){
    long long n = 7;
    // vector<int> xd = nto1(n);
    vector<long long> xd = factorialNumbers(n);
    // vector<int> ok = {1};
    // ok.insert(ok.end(), xd.begin(), xd.end());
    for(auto it: xd){
        cout << it << " ";
    }
}

















///////////////////////////////////////////////////////////////////////////////////////////////////////////
vector<int> printnnos(int x){
    if(x == 1){
        return {1};
    }
    vector<int> xd = printnnos(x - 1);
    xd.push_back(x);
    return xd;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////















///////////////////////////////////////////////////////////////////////////////////////////////////////////

vector<int> nto1(int x){
    if(x == 1){
        return {1};
    }

    vector<int> ans;
    vector<int> xd = nto1(x - 1);
    ans.push_back(x);
    ans.insert(ans.end(), xd.begin(), xd.end());

    return ans;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////






















///////////////////////////////////////////////////////////////////////////////////////////////////////////

void checkfactorialslessthann(long long sums, long long i, long long n, vector<long long> &ans){
    if(sums > n){
        return;
    }
    ans.push_back(sums);
    checkfactorialslessthann(i*sums, i + 1, n, ans);
    return;
}

vector<long long> factorialNumbers(long long n) {
    long long i = 2, sums = 1;
    if(n == 1){
        return {1};
    }
    vector<long long> ans;
    checkfactorialslessthann(sums, i, n, ans);
    return ans;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
