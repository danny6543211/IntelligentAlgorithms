#include <iostream>
#include "TS.h"
using namespace std;


int main()
{   
    // 作業第一題
    TS Q1;
    // 初始解為 1010101
    Q1.get_init_ans( {1,0,1,0,1,0,1} );
    // 取隨機正整數當財寶的價值和重量
    
    Q1.print_ans();
    

    return 0;
}