#pragma once
#include <iostream>
#include <vector>

using namespace std;
class GENE {
    public:
        GENE();
        void print_gene();
        void get_new_gene();
    private:
        vector<int> gene;
        int adaptive_value;
};