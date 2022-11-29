#pragma once
#include <vector>
#include <unordered_map>
using namespace std;

class ACO {
public:
    // 构造
    ACO();
    // 初始化距离矩阵
    void init_distance(vector<vector<int>> matrix);
    // 初始化参数
    void init_parameter(int M, double A, double B, double P);
    // 运行
    void run(int times);
    // 测试函数
    void test();


private:
    // 打印解
    void print_ans(vector<int> ans);
    // 蚁群初始化
    void init_ant();
    // 信息素初始化
    void init_phermone();
    // 查询是否在禁忌表中
    bool in_tabu(int destination, vector<int> ant_path);
    // 移动一步
    int move_one_step();
    // 选择城市的概率
    double probability(int city);

private:
    /* 变量与参数
        m 种群规模
        a 信息启发式因子
        b 期望启发式因子
        p 信息挥发系数
    */
    struct {
        int m;
        int a;
        int b;
        int p;
    } parameter;
    // 信息素
    vector<unordered_map<int, double>> phermone;
    // 城市之间距离矩阵
    vector<vector<int>> distance;
    // 蚁群
    vector<vector<int>> ant_colony;
    // 最好的解
    vector<int> best_ans;
};