#include <bits/stdc++.h>

using namespace std;

int rightshiftoperator(int n){
    return n >> 1;
}

int leftshiftoperator(int n){
    return n << 1;
}

long totalbits(long n){
    int cnt = 0;
    while(n != 0){
        n = n >> 1;
        cnt++;
    }
    return cnt;
}

long shiftleftntimes(long x, long n){
    while(n != 0){
        cout << x << " " << n << "\n";
        x = x << 1;
        n--;
    }
    return x;
}

long reverseint(long n, long tbs){
    long res = 0;
    while(n != 0){
        if(n&1){
            res += pow(2, tbs - 1);
        }
        tbs--;
        n = n >> 1;
    }
    return res;
}

int main(){
    
    int n = 18;

    int rhs = rightshiftoperator(n);
    cout << rhs << "\n";
     
    int lhs = leftshiftoperator(n);
    cout << lhs << "\n";

    long cn = 4;
    long tbs = totalbits(cn);
    cout << tbs << "\n";

    long rev = reverseint(cn, tbs);
    cout << rev << "\n";

    long rs = 32 - tbs;
    long op = shiftleftntimes(rev, rs);
    cout << op << "\n";

    return 0;
}

























// I need to check this

long reverseBits(long n) {

    bitset<32> bit(n);

    string bitStr = bit.to_string();

    reverse(bitStr.begin(), bitStr.end());

    return std::bitset<32>(bitStr).to_ulong();

}

 