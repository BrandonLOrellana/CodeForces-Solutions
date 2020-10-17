/*
 *Link: https://codeforces.com/problemset/problem/61/A
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, b;
    cin>>a>>b;
    for(int i=0; i<a.length(); i++){
        cout<<(a[i]==b[i]?0:1);
    }
    cout<<endl;
}