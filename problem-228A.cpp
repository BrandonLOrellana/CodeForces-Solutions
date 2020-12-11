/*
 *Link: https://codeforces.com/problemset/problem/228/A
*/

#include <iostream>
using namespace std;

int main(){
    int arr[4], j, unique=1;
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    for(int i=1; i<4; i++){
        for(j=0; j<i; j++)
            if(arr[i] == arr[j])
                break;
        if(j==i)
            unique++;
    }
    cout<<4-unique<<endl;
}