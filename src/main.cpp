#include <iostream>
#include "GA.h"
#include "GENE.h"
#include "global.h"

int main() {

    GA test;
    test.print_all_gene();
    cout << test.find_the_best() << endl;
    
    return 0;
}