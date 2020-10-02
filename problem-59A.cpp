/*
 *Link: https://codeforces.com/problemset/problem/59/A
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    int upper_count = 0;
    bool upper;
    cin>>word;
    for(int i=0; i<word.length(); i++){
        if(word[i]<'a')
            upper_count++;
    }
    upper = upper_count > word.length()-upper_count;
    for(int i=0; i<word.length(); i++){
        if(upper)
            word[i] = toupper(word[i]);
        else
            word[i] = tolower(word[i]);
    }
    cout<<word<<endl;
}