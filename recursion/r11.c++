// Recursive code to check whether a string is palindrome or not
#include <bits/stdc++.h>
using namespace std;

bool ispalin(int i,string &word) {
    if(i >= word.size()/2) return true;
    if(word[i] != word[word.size() - i - 1]) return false;
    return ispalin(i+1,word);
}

int main() {
    string s = "hiih";
    cout<<"Is the string palindrome? "<<ispalin(0, s);
}