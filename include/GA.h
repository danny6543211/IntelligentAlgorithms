#pragma once
#include <iostream>
#include <vector>
#include "GENE.h"
#include "global.h"

using namespace std;
class GA {
    public:
        GA();
        // 打印所有基因
        void print_all_gene();
        // 

        // 種群
        vector<GENE> population;
        // 種群中最好的那個基因的適應值
        int best_one_value;
};