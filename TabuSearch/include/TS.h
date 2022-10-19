// TS類
#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class TS {
    public:
        TS();
        void backpack_problem_random_initialize(int n);
        void print_ans();
        void get_init_ans(vector<bool> init_ans);
        void get_treasure_value_and_weight(unordered_map<int, int> init_value);
        

    public:
        vector<bool> ans;
        unordered_map<int, int> treasure_value_and_weight;
        
        
};