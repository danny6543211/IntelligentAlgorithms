#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "GENE.h"
#include "global.h"

GENE::GENE() {
    this->get_new_gene();
    this->adaptive_value = this->calculate_adaptive_value();
}

void GENE::print_gene() {
    vector<int>::iterator it = this->gene.begin();
    while (it != this->gene.end()) {              
        cout.width(4);
        cout.setf(ios::right);
        cout << *it;
        it++;
    }
    cout << "   ";
}

void GENE::get_new_gene() {
    this->gene.clear();
    for (int i = 0; i < GENE_SIZE; i++) {
        this->gene.push_back(rand()%(GENE_MAX-GENE_MIN+1) - (GENE_MAX-GENE_MIN)/2);
    }
}

double GENE::calculate_adaptive_value() {
    // funtion = 1 / (1 + abs(x1) + abs(x2) + abs(x3) + abs(x4));
    this->adaptive_value = (double) 1 / (1 + abs(this->gene[0]) + abs(this->gene[1]) + abs(this->gene[2]) + abs(this->gene[3]));
    return this->adaptive_value;
}

void GENE::cross_to1(GENE &who) {
    int cross_position = rand() % GENE_SIZE;
    vector<int> temp;
    vector<int>::iterator it = this->gene.begin() + cross_position;
    // this 給 temp
    while (it != this->gene.end()) {
        temp.push_back(*it);
        it++;
    }
    // this 刪掉給 temp 的
    for (int i = 0; i < GENE_SIZE - cross_position; i++) {
        this->gene.pop_back();
    }
    // who 給 this
    it = who.gene.begin() + cross_position;
    while (it != who.gene.end()) {
        this->gene.push_back(*it);
        it++;
    }
    // who 刪掉給 this 的
    for (int i = 0; i < GENE_SIZE - cross_position; i++) {
        who.gene.pop_back();
    }
    // temp 給 who
    it = temp.begin();
    while (it != temp.end()) {
        who.gene.push_back(*it);
        it++;
    }
}

void GENE::cross_to2(GENE &who) {
    int cross_position = rand() % GENE_SIZE;
    vector<int> temp;
    vector<int>::iterator it = this->gene.begin() + cross_position;
    // this 給 temp
    while (it != this->gene.end()) {
        temp.push_back(*it);
        it++;
    }
    // this 刪掉給 temp 的
    for (int i = 0; i < GENE_SIZE - cross_position; i++) {
        this->gene.pop_back();
    }
    // who 給 this
    it = who.gene.begin() + cross_position;
    while (it != who.gene.end()) {
        this->gene.push_back(*it);
        it++;
    }
    // who 刪掉給 this 的
    for (int i = 0; i < GENE_SIZE - cross_position; i++) {
        who.gene.pop_back();
    }
    // temp 給 who
    it = temp.begin();
    while (it != temp.end()) {
        who.gene.push_back(*it);
        it++;
    }
}