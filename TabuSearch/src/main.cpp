#include <stdlib.h>
#include <vector>

using namespace std;

class TS {
    public:
        TS();
        void get_init_ans(vector<bool> init_ans) {
            this->ans = init_ans;
        }
    public:
        vector<bool> ans;
};

int main()
{   
    // 第一題
    TS Q1;
    // 初始解為 1010101
    Q1.get_init_ans( {1, 0, 1, 0, 1, 0, 1} );
    // 实例使用第三章问题与思考第四题
    // i  = {  1,  2,  3, 4,  5,  6,  7 }
    // Pi = { 30, 60, 25, 8, 10, 40, 60 }
    // Wi = { 40, 40, 30, 5, 15, 35, 30 }
    
    
    return 0;
}