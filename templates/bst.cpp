#include <bits/stdc++.h>

using namespace std;

void baseproblem();
bool conditionofbst(vector<int> xd, int target, int conditions);

int main(){

    // The BST Template is very simple however, there are FIVE things that needs to be clear in mind.

    // 1. We need to define what our left and right should be. Why is that complicated????
        // Well if, we choose our left and right as 0 and n - 1 that is we are choosing the array which is provided to us as search criteria.
        // In most medium level problems, that is not true. For ex: If the answer for our problem does not lie in the search space criteria(arr),
        // Then we cannot choose left as 0 and right as n - 1 . We need to think it through and then determine these two values.

    // 2. Writing a condition that will terminate our loop in future.

    // 3. Should the loop behave till left < right or left <= right

    // 4. Advancing the current element to left or left + 1 or right or right - 1

    // 5. Returning left or right?

    // Template is below, even though it is python code look for the logic of template
    // def binary_search(array) -> int:
    // def condition(value) -> bool: 
    //     pass

    // left, right = 0, len(array) // This is our first thing that we should look for
    // while left < right: // This is the third thing to keep in mind
    //     mid = left + (right - left) // 2
    //     if condition(mid): // This is the second thing
    //         right = mid // This is the fourth thing to keep in mind
    //     else:
    //         left = mid + 1
    // return left // This is the last thing to keep in mind

    // Lets try to solve some problems
    baseproblem();
    return 0;
}

bool conditionofbst(vector<int> xd, int target, int conditions){
    // Now what we want is, is target going to meet our condition or not? if it is return true
    // In our current problem, the target is the number of apples a person can eat in an hour.
    // However, if the total number of hours exceed the condition return false.
    // The total number of hours are achieved, by summing up each element of array with how many hours required to eat that element.

    int cnt = 0;
    for(int i = 0; i < xd.size(); i++){
        cnt += xd[i]/target;
        if(xd[i]%target != 0) cnt++;
    }

    return cnt <= conditions;
}

void baseproblem(){
    vector<int> xd = {3, 6, 7, 11};
    int target;
    int conditions = 8;
    // cin >> conditions;

    int left = 1, right = *max_element(xd.begin(), xd.end());
    // 1. First create the condition function or a single line condition  => Done
    
    // 2. Define if you want left < right or left <= right
    while(left <= right){
        int mid = left + (right - left)/2;
        if(conditionofbst(xd, mid, conditions)){
            right = mid - 1; // 3. The condition is getting satisfied, so we try to reduce the right to mid
        }else{
            left = mid + 1;
        }
    }

    // 4. Now we return the element, but what should we return? This can be achieved if you understand some of the test cases
    // cout << left << "\n";
    // return left;

}



