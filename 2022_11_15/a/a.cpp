#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string S;
    cin >> S;
    string rev = S;
    reverse(rev.begin(),rev.end());
    if(S == rev) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}