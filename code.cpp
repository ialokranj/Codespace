#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;

int countUpperCase(string s) {
    int count = 0;
    for(int i = 0 ; i < s.size() ; i++) {
        if(isupper(s[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    string str[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> str[i];
    }
    for(int i = 0 ; i < n ; i++) {
        cout << countUpperCase(str[i]) << endl;
    }
    return 0;
}