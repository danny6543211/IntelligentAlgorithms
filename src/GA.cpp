#include <iostream>
#include <vector>
#include "GA.h"
#include "GENE.h"
#include "global.h"

using namespace std;

GA::GA() {
    GENE temp;
    for (int i = 0; i < POPULATION_SIZE; i++) {
        population.push_back(temp);
        temp.get_new_gene();
    }
    this->best_one_value = 0;
}

void GA::print_all_gene() {
    vector<GENE>::iterator it = this->population.begin();
    int gene_number = 1;
    while (it != this->population.end()) {
        cout.width(4);
        cout << gene_number << ":  ";
        it->print_gene();
        cout << endl;
        gene_number++;
        it++;
    }
}

int main() {
    GA test;
    test.print_all_gene();
    
    return 0;
}