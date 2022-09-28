#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "GENE.h"
#include "global.h"

GENE::GENE() {
    srand(time(NULL));
    this->get_new_gene();
    this->adaptive_value = 0;
}

void GENE::print_gene() {
    vector<int>::iterator it = this->gene.begin();
    while (it != this->gene.end()) {              
        cout.width(4);
        cout.setf(ios::right);
        cout << *it;
        it++;
    }
}

void GENE::get_new_gene() {
    this->gene.clear();
    for (int i = 0; i < GENE_SIZE; i++) {
        this->gene.push_back(rand()%(GENE_MAX-GENE_MIN+1) - (GENE_MAX-GENE_MIN)/2);
    }
}