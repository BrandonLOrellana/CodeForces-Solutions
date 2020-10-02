/*
 *Link: https://codeforces.com/problemset/problem/734/A
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string winners;
    int len, anton=0;
    cin>>len>>winners;
    for(int i=0; i<len; i++){
        if(winners[i]=='A')
            anton++;
    }
    if((len-anton)==anton){
        cout<<"Friendship";
    }
    else if((len-anton)>anton){
        cout<<"Danik";
    }
    else
        cout<<"Anton";
    cout<<endl;
}