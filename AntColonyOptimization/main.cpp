#include "ACO.h"

int main() {
    
    // 放三只蚂蚁
    ACO TSP;
    // 初始化距离矩阵
    TSP.init_distance(  
        {
            {0, 3, 1, 2},
            {3, 0, 5, 4},
            {1, 5, 0, 2},
            {2, 4, 2, 0}
        }
    );

    TSP.test();

    return 0;
}