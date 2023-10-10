/*
^-^ THINK SIMPLE ^-^
^-^ THINK FAST ^-^
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define mod 1000000007
#define siz 100001

int searchbst(vector<int> xd, int x);
int lowerbounds(vector<int> xd, int x);
int upperbound(vector<int> xd, int x);

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    vector<int> xd = {-1, 0, 1, 3, 3, 6, 9, 10, 14};

    int targetindex = upperbound(xd, 14);
    cout << targetindex << "\n";

}

int lowerbounds(vector<int> xd, int x){
    int left = 0, right = xd.size() - 1, mid = left + (right - left)/2, ans = -1;
    // two conditions
    if(xd[right] <= x){
        return right;
    }

    while(left <= right){
        if(xd[mid] == x) return mid; 

        if(xd[mid] < x){
            left = mid + 1;
        }else if(xd[mid] >= x){
            ans = mid;
            right = mid - 1;
        }

        mid = left + (right - left)/2;
    }

    return ans;
}

int upperbound(vector<int> xd, int x){
    int left = 0, right = xd.size() - 1, mid = left + (right - left)/2, ans = -1;
    // two conditions
    if(xd[right] <= x){
        return right + 1;
    }

    while(left <= right){
        cout << left << " " << mid << " " << right << "\n";
        if(xd[mid] <= x){
            left = mid;
        }else if(xd[mid] > x){
            ans = mid;
            right = mid - 1;
        }

        mid = left + (right - left)/2;
    }

    return ans;
}

int searchbst(vector<int> nums, int target){
    int left = 0, right = nums.size()-1, mid = left + (right - left)/2;
    while(left <= right){
        if(nums[mid] == target) return mid;

        if(nums[mid] < target){
            left = mid + 1;
        }else if(target < nums[mid]){
            right = mid - 1;
        }

        mid = left + (right - left)/2;
    }
    return -1;
}

void findpeakelement(vector<int> xd, int x, int l, int r, int mid){
    if(mid == l || mid == r){
        return;
    }
}