/*
 *Link: https://codeforces.com/problemset/problem/977/A
*/
#define ull unsigned long long
#include <iostream>
using namespace std;

int main(){
    ull n, k;
    cin>>n>>k;
    for(int i=0; i<k; i++){
        if(n%10==0)
            n/=10;
        else
            n--;
    }
    cout<<n<<endl;
}