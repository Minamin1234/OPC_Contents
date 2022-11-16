#include <iostream>

class OPC
{
private:
    int A,B,C;
protected:
public:
    OPC(int a,int b,int c){
        this->A = a;
        this->B = b;
        this->C = c;
    }

    void show_sum(){
        std::cout << A + B + C << std::endl;
    }

    void show_ABC(){
        std::string result = "";
        for(int i = 0;i < A;i++){
            result += 'A';
        }
        for(int i = 0;i < B;i++){
            result += 'B';
        }
        for(int i = 0;i < C;i++){
            result += 'C';
        }
        std::cout << result << std::endl;
    }

    void show_scalar(int x){
        std::cout << this->A * x << " ";
        std::cout << this->B * x << " ";
        std::cout << this->C * x << std::endl;
    }

    void show_f(){
        std::cout << (A * A) * B + (C * B) << std::endl;
    }
};

int main(){
    int a,b,c;
    std::cin >> a >> b >> c;
    OPC opc = OPC(a,b,c);
    opc.show_sum();
    opc.show_ABC();
    opc.show_scalar(2);
    opc.show_f();
    return 0;
}