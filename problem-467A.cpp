/*
 *Link: https://codeforces.com/problemset/problem/467/A
*/

#include <iostream>
using namespace std;

int main(){
    int n, p, q, res=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p>>q;
        if(q-p>=2)
            res++;
    }
    cout<<res<<endl;
}