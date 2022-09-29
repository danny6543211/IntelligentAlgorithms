#pragma once
#include <iostream>
#include <vector>
#include "GENE.h"
#include "global.h"

using namespace std;
class GA {
    public:
        GA();
        // 產生初始種群
        void create_init_population();
        // 打印所有基因
        void print_all_gene();
        // 輪盤賭選擇運算
        void roulette_choice();
        // 交差運算
        void cross();
        // 找出種群基因中最高的適應值
        double find_the_best();
        // 排序基因大小
        void sort();
        // 種群
        vector<GENE> population;
        // 種群中最好的那個基因的適應值
        int best_one_value;
};