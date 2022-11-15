#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    int n,a;
    vector<int> A;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    reverse(A.begin(),A.end());
    cout << A[2] << endl;
    return 0;
}