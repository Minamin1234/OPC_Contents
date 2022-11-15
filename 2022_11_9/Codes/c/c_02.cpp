#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    int n,a;
    cin >> n;
    vector<int> A;
    for(int i = 0;i < n;i++){
        cin >> a;
        A.push_back(a);
    }
    cout << *max_element(A.begin(),A.end()) << endl;
    return 0;
}