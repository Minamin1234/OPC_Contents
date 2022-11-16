#include <iostream>
#include <vector>

using namespace std;

int main(){
    int C,T,A,B;
    cin >> C >> T;
    vector<vector<int>> Towns(C);
    for(int i = 0;i < T;i++){
        cin >> A >> B;
        Towns[A-1].push_back(B-1);
        Towns[B-1].push_back(A-1);
    }
    for(auto b : Towns){
        cout << b.size() << endl;
    }
    return 0;
}