#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "../include/GENE.h"
#include "../include/global.h"

GENE::GENE() {
    this->gene = get_random_gene(GENE_COUNT, GENE_MAX, GENE_MIN);
    this->value = 0;
}

std::vector<int> GENE::get_random_gene(int n, int max, int min) {
    std::vector<int> temp;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        temp.push_back(rand()%(GENE_MAX-GENE_MIN+1) - (GENE_MAX-GENE_MIN)/2);
    return temp;
}


void GENE::print_gene() {
    std::vector<int>::iterator it = this->gene.begin();
    while (it != this->gene.end()) {
        std::cout << *it << std::endl;
        it++;
    }
}
