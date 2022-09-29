#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include "GA.h"
#include "GENE.h"
#include "global.h"

int main() {
    
    // 隨機種子
    srand(time(NULL));

    GA test;
    test.print_all_gene();

    for (int i = 0; i < 100; i++) {
        test.roulette_choice(); 
        test.cross();
    }
    
    test.print_all_gene();

    return 0;
}