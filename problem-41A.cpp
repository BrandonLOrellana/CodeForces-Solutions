/*
 *Link: https://codeforces.com/problemset/problem/41/A
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string word, word2, reverse="";
    cin>>word>>word2;
    for(int i=word.length()-1; i>=0; i--){
        reverse+=word[i];
    }
    cout<<(word2.compare(reverse)==0?"YES":"NO")<<endl;
}