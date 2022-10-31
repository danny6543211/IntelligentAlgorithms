#define X_MAX 10
#define X_MIN 0
#define Y_MAX 10    
#define Y_MIN 0
#define CITY_COUNT 5

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

struct city {
    int x;
    int y;
};

class TS {
    public:
        TS();
        // 随机初始化城市的位置
        void random_city_location(int city_count);
        // 计算两城市距离
        double calculate_city_distance(int city_a_index, int city_b_index);
    public:
        vector<city> city_table;

};

TS::TS() {

}

void TS::random_city_location(int city_count) {
    srand(time(NULL));
    city temp;
    for (int i = 0; i < city_count; i++) {
        temp.x = rand()%(X_MAX-X_MIN);
        temp.y = rand()%(Y_MAX-Y_MIN);
        city_table.push_back(temp);
    }
}

double TS::calculate_city_distance(int city_a_index, int city_b_index) {
    int x_distance = fabs(city_table[city_a_index].x - city_table[city_b_index].x);
    int y_distance = fabs(city_table[city_a_index].y - city_table[city_b_index].y);
    double distance = sqrt( pow(x_distance, 2) + pow(y_distance, 2) );
    return distance;
}

int main() {
    city test1;
    city test2;
    test1.x = 0;
    test1.y = 1;
    test2.x = 1;
    test2.y = 0;

    TS test;
    test.city_table.push_back(test1);
    test.city_table.push_back(test2);
    cout << test.calculate_city_distance(0, 1);
}
