/*
 *Link: https://codeforces.com/problemset/problem/1030/A
*/

#include <iostream>
using namespace std;

int main(){
    int n, p;
    bool easy = true;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p;
        if(p == 1)
            easy = false;
    }
    cout<<(easy?"EASY":"HARD")<<endl;
}