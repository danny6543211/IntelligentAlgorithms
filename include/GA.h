#pragma once
#include <iostream>
#include <vector>
#include "GENE.h"
#include "global.h"

using namespace std;
class GA {
    public:
        GA();
        void print_all_gene();
    // private:
        vector<GENE> population;
        int best_one_value;
};