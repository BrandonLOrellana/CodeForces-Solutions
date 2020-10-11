/*
 *Link: https://codeforces.com/problemset/problem/677/A
*/

#include <iostream>
using namespace std;

int main(){
    int n, h, w, a;
    cin>>n>>h;
    w=n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a>h) w++;
    }
    cout<<w<<endl;
}