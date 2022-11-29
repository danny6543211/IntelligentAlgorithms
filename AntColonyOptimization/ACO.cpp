#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ACO.h"

using namespace std;
/*
    public:
        ACO                 构造
        init_distance       初始化距离矩阵
        init_parameter      初始化参数
        test                测试函数
        run                 开始运行
        
*/

ACO::ACO() {
    srand(time(NULL));
}

void ACO::init_distance(vector<vector<int>> matrix) {
    distance = matrix;
}

void ACO::init_parameter(int M, double A, double B, double P) {
    parameter.m = M;    
    parameter.a = A;
    parameter.b = B;    
    parameter.p = P;    
}

// times 为迭代次数，若是满足停止条件则会自动停止
void ACO::run(int times) {
    init_ant();
    for (int i = 0; i < times; i++) {

        
    }
}

// 测试函数
void ACO::test() {
    
}

/*
    private:
        print_ans       打印解
        init_ant        初始化蚂蚁
        init_phermone   信息素初始化
        in_tabu         判断是否在禁忌表中
        move_one_step   移动一步
        probability     选择城市的概率
*/

void ACO::print_ans(vector<int> ans) {
    vector<int>::iterator it = ans.begin();
    for (; it != ans.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void ACO::init_ant() {
    vector<vector<int>>::iterator ant = ant_colony.begin();
    // 第一个城市随机放，0~3四个城市
    for (int i = 0; i < parameter.m; i++) {
        ant[i].push_back(rand()%4);
    }
}

void ACO::init_phermone() {
    vector<unordered_map<int, double>>::iterator it = phermone.begin();
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            it[i][j] = 0.1;
        }
    }
}

bool ACO::in_tabu(int destination, vector<int> ant_path) {
    vector<int>::iterator it = ant_path.begin();
    for (;it != ant_path.end(); it++) {
        if (*it == destination)
            return 1;
    }
    return 0;
}

int ACO::move_one_step() {

}

double ACO::probability(int city) {
    
}