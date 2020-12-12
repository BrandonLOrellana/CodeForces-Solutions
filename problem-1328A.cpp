/*
 *Link: https://codeforces.com/problemset/problem/1328/A
*/

#include <iostream>
using namespace std;

int main(){
    int t, a , b;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        int temp = a%b;
        if(temp == 0)
            cout<<0<<endl;
        else
            cout<<b-temp<<endl;
    }
}