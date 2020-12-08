/*
 *Link: https://codeforces.com/problemset/problem/469/A
*/

#include <iostream>
using namespace std;

int main(){
    int n, p, aux;
    cin>>n>>p;
    bool *vals = new bool[n];
    for(int i=0; i<n; i++){
        vals[i] = false;
    }
    for(int i=0; i<p; i++){
        cin>>aux;
        vals[aux-1] = true;
    }
    cin>>p;
    for(int i=0; i<p; i++){
        cin>>aux;
        vals[aux-1] = true;
    }
    for(int i=0; i<n; i++){
        if(!vals[i]){
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
}