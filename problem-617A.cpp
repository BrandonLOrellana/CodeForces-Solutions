/*
 *Link: https://codeforces.com/problemset/problem/617/A
*/

#include <iostream>
using namespace std;

int main(){
    unsigned int x, res;
    cin>>x;
    res = x/5;
    if(x%5 != 0)
        res++;
    cout<<res<<endl;
}