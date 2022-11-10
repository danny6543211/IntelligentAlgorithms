#include <iostream>
using namespace std;

int main() 
{
    // 初始温度
    double T = 1000;
    // 降温系数
    double a = 0.99;
    // 最小温度
    double e = 0.01;
    

    while (1) {

        



        // 降温
        T *= a;
        if (T < e) 
            break;
    }

    return 0;
}