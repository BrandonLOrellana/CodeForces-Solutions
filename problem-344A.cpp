/*
 *Link: https://codeforces.com/problemset/problem/344/A
*/

#include <iostream>
using namespace std;

int main(){
    int n, last_m=0, m, groups=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m;
        if(last_m != m) groups++;
        last_m = m;
    }
    cout<<groups<<endl;
}