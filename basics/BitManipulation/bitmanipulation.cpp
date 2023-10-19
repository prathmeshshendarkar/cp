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

int getithbit(long long n, long long j){
    // To set a mask at the ith position
    // What is mask??? It's like we are creating a number based on bits
    // For ex: if we want a number where 3rd bit is set
    // 0100 => We can create one using int x = 1<<2
    // Its like we are incrementing 1 to power of 2^2
    // Nothing fancy, if we create a number with a particular bit set then we can perform n number of things.
    long long mask = 1<<(j - 1);
    return n&mask;
}

long long setithbit(long long n, long long i){
    long long mask = 1<<(i - 1);
    return n|mask;
}

long long clearithbit(long long n, long long i){
    long long mask = 1<<(i-1);
    // The mask is like lets say 01000
    // What we want is to clear the 3rd bit of nth number: 11001
    // now here, we want to perform and operation so that, 0&whaeverbit will become 0
    // But we have mask 0s, if we set to 0s only then the other positions will become 0 when we perform &
    // so we will require 1s in all the positions except the ith bit, like this: 10111
    // Now, if we and with n, then others position will be ok, but the ith position will get clear
    
    // We can get this type of mast by negating the current mask
    // that is, mask = ~mask // this will flip all the bits.
    return n&(~mask);
}

int main(){
    
    // int n = 18;

    // int rhs = rightshiftoperator(n);
    // cout << rhs << "\n";
     
    // int lhs = leftshiftoperator(n);
    // cout << lhs << "\n";

    // long cn = 4;
    // long tbs = totalbits(cn);
    // cout << tbs << "\n";

    // long rev = reverseint(cn, tbs);
    // cout << rev << "\n";

    // // long rs = 32 - tbs;
    // long op = shiftleftntimes(rev, rs);
    // cout << op << "\n";

    long long n = 25;
    int op = getithbit(n, 3);
    cout << op << "\n";

    n = 25;
    long long ans = setithbit(n, 3);
    cout << ans << "\n";

    n = 25;
    long long res = clearithbit(n, 3);
    cout << res << "\n";

    return 0;
}

























// I need to check this

long reverseBits(long n) {

    bitset<32> bit(n);

    string bitStr = bit.to_string();

    reverse(bitStr.begin(), bitStr.end());

    return std::bitset<32>(bitStr).to_ulong();

}

 