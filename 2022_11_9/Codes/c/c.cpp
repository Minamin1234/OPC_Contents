#include <iostream>
#include <vector>

int main(){
    int n,a;
    std::cin >> n;
    int max;
    std::cin >> max;
    for(int i = 0;i < n-1;i++){
        std::cin >> a;
        if(max < a) max = a;
    }
    std::cout << max << std::endl;
    return 0;
}