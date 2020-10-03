/*
 *Link: https://codeforces.com/problemset/problem/271/A
*/

#include <iostream>
using namespace std;

int main(){
    int y;
    int d[4];
    cin>>y;
    for(int i=y+1; i<10000; i++){
        d[0] = i%10;
        d[1] = (i/10)%10;
        d[2] = (i/100)%10;
        d[3] = i/1000;
        bool unique = true;
        for(int j=0; j<3; j++){
            for(int k=j+1; k<4; k++){
                if(d[j] == d[k])  
                    unique = false;
            }
        }
        if(unique){
            cout<<i<<endl;
            return 0;
        }
    }
}