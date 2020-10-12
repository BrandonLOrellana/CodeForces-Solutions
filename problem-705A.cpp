/*
 *Link: https://codeforces.com/problemset/problem/705/A
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a="I hate ", b="I love ", res="";
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        res.append(i%2==0?a:b);
        res.append("that ");
    }
    res.erase(res.length()-6, res.length());
    res.append(" it");
    cout<<res<<endl;
}