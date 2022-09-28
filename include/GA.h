#include <iostream>
#include <vector>
#include "GENE.h"

// 遺傳算法類
class GA {
    public:
        GA(int n);
        // 產生初始種群  n為多少個個體
        void create_init_population(int size);
        // 是否滿足停止條件
        bool is_stop();
        // 適應度函數
        int adaptive_funtion();
        // 選擇哪些基因遺傳
        void choice();
        // 遺傳運算
        void genetic_computing();
        // 更新種群
        void update();
        // 打印n號基因
        void print(int n);
        // 種群
        std::vector<GENE> population;
        // 當前種群適應度最高的
        int best_one;
};

