#include <iostream>
#include <vector>

int main() {
    // 假设这是你的矩阵
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 你想获取第1行的数据（注意：在C++中，索引是从0开始的，所以第1行的索引是0）
    size_t rowIndex = 0; // 假设你想取第一行
    if (rowIndex < matrix.size()) { // 检查索引是否有效
    //matrix是一个std::vector<std::vector<int>>类型的二维向量（即矩阵），那么调用matrix.size()将会返回矩阵的行数
        // 获取指定行的数据
        const std::vector<int>& sourceRow = matrix[rowIndex];

        // 创建一个新的数组来存储这一行的数据
        std::vector<int> newRow(sourceRow.begin(), sourceRow.end());

        // 现在newRow包含了matrix[rowIndex]的拷贝
        std::cout << "New Row Data: ";
        for(int num : newRow) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Invalid row index." << std::endl;
    }
    system("pause");
    return 0;
}