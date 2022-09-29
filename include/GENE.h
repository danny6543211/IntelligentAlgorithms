#pragma once
#include <iostream>
#include <vector>

using namespace std;

class GENE {
    public:
        GENE();
        // 打印基因
        void print_gene();
        // 刷新基因
        void get_new_gene();
        // 計算適值函數的值
        double calculate_adaptive_value();
    // private:
        // 基因
        vector<int> gene;
        // 基因的適應值
        double adaptive_value;
        //
};