#include "TS.h"
#include <stdlib.h>    

TS::TS() {

}

void TS::backpack_problem_random_initialize(int n) {
    // n = 有幾個要拿的東西
    // 1 = 拿, 0 = 不拿
    for (int i = 0; i < n; i++) {
        this->ans.push_back(rand()%2);
    }   
}

void TS::print_ans() {
    vector<bool>::iterator it = this->ans.begin();
    while (it != ans.end()) {
        cout << *it << " ";
        it++;
    }
}

void TS::get_init_ans(vector<bool> init_ans) {
    this->ans = init_ans;
}

void TS::get_treasure_value_and_weight(unordered_map<int, int> init_value) {
    this->treasure_value_and_weight = init_value;
}

