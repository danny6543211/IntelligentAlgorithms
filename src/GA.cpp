#include <iostream>
#include <vector>
#include <stdlib.h>
#include "GA.h"
#include "GENE.h"
#include "global.h"

using namespace std;

GA::GA() {
    create_init_population();
    this->best_one_value = 0;
}

void GA::create_init_population() {
    GENE temp_gene;
    for (int i = 0; i < POPULATION_SIZE; i++) {
        temp_gene.adaptive_value = temp_gene.calculate_adaptive_value();
        this->population.push_back(temp_gene);
        temp_gene.get_new_gene();
    }
}

void GA::print_all_gene() {
    vector<GENE>::iterator it = this->population.begin();
    int gene_number = 1;
    while (it != this->population.end()) {
        cout.width(4);
        cout << gene_number << ":  ";
        it->print_gene();
        cout << it->adaptive_value;
        cout << endl;
        gene_number++;
        it++;
    }
}

void GA::roulette_choice() {
    double all_adaptive_value = 0;
    double choice = 0;
    for (int i = 0; i < POPULATION_SIZE; i++) {
        all_adaptive_value += this->population[i].calculate_adaptive_value();
    }

    vector<GENE> table;
    // 複製過去概率表
    for (int i = 0; i < POPULATION_SIZE; i++) {
        table.push_back(this->population[i]);
    }

    // 輪盤賭更改當前種群
    // 清空當前的重新抽
    this->population.clear();
    for (int i = 0; i < POPULATION_SIZE; i++) {
        choice = (rand()/(double) RAND_MAX)*all_adaptive_value;
        // 上面 ok
        double probability = 0;
        int index = 0;
        while (probability < choice) {
            probability += table[index].adaptive_value;
            index++;
        }    
        this->population.push_back(table[index-1]);
    }
}

void GA::cross() {

}

double GA::find_the_best() {
    double best = 0;
    vector<GENE>::iterator it = this->population.begin();
    for (int i = 0; it != this->population.end(); i++, it++) {
        if (this->population[i].adaptive_value > best)
            best = this->population[i].adaptive_value;
    }
    return best;
}