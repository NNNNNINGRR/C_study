#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
#include <unordered_set>
using namespace std;

// 用于计算数字x的三位数分解
vector<int> decompose(int x) {
    vector<int> parts = {x / 100, (x % 100) / 10, x % 10};
    return parts;
}

// 检查vector v中是否存在数字num
bool contains(const vector<int>& v, int num) {
    return find(v.begin(), v.end(), num) != v.end();
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> output;
    vector<vector<int>> matrix;
    vector<vector<int>> output0;

    // 遍历向量a中的每个元素，计算所有可能的三个数字的组合及其和
    for (int i = 0; i < a.size(); i++) {
        int x = a[i] * 100;
        vector<int> p = a;
        p.erase(p.begin() + i);
        for (int j = 0; j < p.size(); j++) {
            int y = p[j] * 10;
            vector<int> p_copy = p;
            p_copy.erase(p_copy.begin() + j);
            for (int k = 0; k < p_copy.size(); k++) {
                int z = p_copy[k];
                int out = x + y + z;
                output.push_back(out); 
            }
        }
    }

    // 使用哈希表优化查找满足2倍和3倍关系的三个数
    unordered_set<int> outputSet(output.begin(), output.end());
    for (int i : output) {
        if (outputSet.count(2 * i) && outputSet.count(3 * i)) {
            vector<int> triplet = {i, 2 * i, 3 * i};
            matrix.push_back(triplet);
        }
    }

    // 输出matrix中的所有组合
    cout << "matrix" << endl;
    for (const auto &row : matrix) {
        for (int num : row) {
            cout << num << ' ';
        }
        cout << endl << endl;
    }

    // 从matrix中筛选出不包含重复数字的组合，存入output0
    for (const auto &row : matrix) {
        vector<int> digits;
        for (int num : row) {
            digits.push_back(num % 10);
            digits.push_back(num / 10 % 10);
            digits.push_back(num / 100);
        }
        sort(digits.begin(), digits.end());
        if (adjacent_find(digits.begin(), digits.end()) == digits.end()) {
            output0.push_back(row);
        }
    }

    // 输出output0中的所有组合
    cout << "output0" << endl;
    for (const auto &row : output0) { 
        for (int n : row) {
            cout << n << ' ';
        }
        cout << endl;
    }

    // 跨平台的暂停方法
    // 对于简单的示例，直接使用cin.get()来代替system("pause")
    cin.get();
    return 0;
}