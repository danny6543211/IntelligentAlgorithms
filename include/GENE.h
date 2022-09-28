#include <iostream>
#include <vector>


// 基因類
class GENE {
    public:
        // n為個體基因數
        GENE();
        // 產生隨機基因
        std::vector<int> get_random_gene(int n, int max, int min);
        // 打印所有基因
        void print_gene();
        // 基因
        std::vector<int> gene;
        // 基因的適應度
        int value;
};