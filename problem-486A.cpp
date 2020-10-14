/*
 *Link: https://codeforces.com/problemset/problem/486/A
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==1)
        cout<<((n/2)+1)*-1<<endl;
    else
        cout<<(n/2)<<endl;
}