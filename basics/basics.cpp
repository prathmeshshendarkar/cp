// M_PI is the value of PI can be used as constant

#include <bits/stdc++.h>
using namespace std;
void vectorbasics();
void pairsbasics();
void iteratorsbasics();
void funcs();

int main(){
    // common functions
    // funcs();

    // Comparators
    // sort(s.begin(), s.end(), comp);

    // Pairs
    // pairsbasics();

    // vectors
    // vectorbasics();

    // iterators on string
    // iteratorsbasics();

    // How to print with a precision value
    // cout << fixed << setprecision(10) << x/(double)2 << "\n";

    // ## Questions??

    // # 1. How to build a character size array for lowercase alphabets?
    // int arr[26] = {0} 
    // To access a particular character value: arr[s[i] - 'a']
    // The s[i] - 'a' basically subtracts value of any character - character a.

    // 2. How to build a character size array for all the characters?
    // int arr[256] = {0}
    // Same access methods.
    return 0;
}





















static bool comp(string a, string b){
    // lets say we have vector of strings [flow, flower, flo, flew] => [flo, flew, flow, flower]
    return a.size() < b.size(); // custom comparator increasing
}


























void pairsbasics(){
    // pair<int , int> ps = {1,2};
    // pair<string, int> xd = {"Hello", 0};
    // pair<int, pair<int, int>> ok = {1, {2,3}};
    // pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};

    // cout << ps.first << "\n";
    // cout << xd.first << "\n";
    // cout << ok.second.first << "\n";
    // cout << arr[1].second << "\n";
}

















void vectorbasics(){
    vector<int> xd;
    xd.push_back(0);
    xd.emplace_back(1);
    cout << xd[0] << " " << xd[1] << "\n";
    vector<int> op(5, 0);
    for(auto it: op){
        cout << it << "\n";
    }

    vector<pair<int, int>> pr = {{1,2}, {3,4}};
    for(auto xd: pr){
        cout << xd.first << " " << xd.second << "\n";
    }

    vector<int>::iterator its = op.begin();
    cout << *its << "\n";
    for(auto it: pr){
        cout << it.first << " " << it.second << "\n";
    }

    op.erase(op.begin() + 1, op.begin() + 3); // Erases elements between 1 and 3
    for(auto it: op){
        cout << it << "\n";
    }
    pr.erase(pr.begin());
    for(auto it = pr.begin(); it != pr.end(); it++){
        cout << it->first << " " << it->second << "\n";
    }

    op.insert(op.begin() + 1, 2, 15); // Insert two value of 15 from position 1
    for(auto it: op){
        cout << it << "\n";
    }
    pr.insert(pr.begin(), {5,6});
    for(auto it = pr.begin(); it != pr.end(); it++){
        cout << it->first << " " << it->second << "\n";
    }

    vector<int> cp(2, 100);
    cp.insert(cp.begin(), op.begin() + 1, op.begin() + 3);
    for(auto it: cp){
        cout << it << "\n";
    }
}


















void iteratorsbasics(){
    // The whole string is occupying one position of memory, its not like each character holds different memory address.
    string s = "hacker";
    string::iterator ola = s.begin();
    cout << &ola << "\n";
    ola = ola + 1;
    cout << &ola << "\n";
    cout << *ola << "\n";
    for(auto xd = s.begin(); xd != s.end(); xd++){
        cout << *xd << " ";
    }
}







void funcs(){
    string a = "ebcde";
    string b = "cdeeb";
    // a+a => ebcdeebcde
    // b is always going to be a substring of a+a otherwise it is not a rotated array
    bool subs = (a+a).find(b) != string::npos; // The npos basically means to the end of the string
    // actually, npos is the highest value of an element of type string, so it is like int_max + 1
    // find is like substring finder.

}