#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include "GA.h"
#include "GENE.h"
#include "global.h"

int main() {
    vector<int> test = {1, 2, 3};
    vector<int>::iterator it = test.begin();
    test.erase(it+1);
    it = test.begin();
    while (it != test.end()) {
        cout << *it;
        it++;
    }
    return 0;
}