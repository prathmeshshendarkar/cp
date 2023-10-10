/*
^-^ THINK SIMPLE ^-^
^-^ THINK FAST ^-^
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define mod 1000000007
#define siz 100001
 
double squareRoot(long long n, int d) 

{   

    int low = 0 ;

    int high = n;

    while(low<=high)

    {

        long long int mid = low + (high-low)/2;

        long long int ans = mid*mid;

        

            if(ans<=n)

            {

               low = mid+1;

            }

            else

            {

                high = mid-1;

            }   

        

    }

    long long int ans1 = high;

    double finalans = ans1;

    double step = 0.1;

    for(int i = 0 ;i<d;i++)

    {

        for(double j = finalans ;j*j<=n;j=j+step)

        {

            finalans=j;

        }

        // divide the step

        step = step/10;

    }

    return finalans/2;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);

	ll t;
	cin >> t;
	while(t--){
		ll a1, a2,b1,b2,c1,c2;
		cin >> c1 >> c2;
		cin >> a1 >> a2;
		cin >> b1 >> b2;

		ll sums = pow(b2-a2, 2) + pow(b1-a1, 2);

		double xd = squareRoot(sums, 10);

		cout << xd << "\n";
	}
}