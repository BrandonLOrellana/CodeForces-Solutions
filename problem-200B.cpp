/*
 *Link: https://codeforces.com/problemset/problem/200/B
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *p = new int[n];
    double proportion = 0.0;
    for(int i=0; i<n; i++){
        cin>>p[i];
        proportion+=(double)p[i];
    }
    cout<<proportion/n;
}   