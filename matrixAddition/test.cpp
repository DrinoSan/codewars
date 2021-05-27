q#include <iostream>
#include <cstddef>
#include <vector>

std::vector<std::vector<int> > matrixAddition(std::vector<std::vector<int> > a,std::vector<std::vector<int> > b){
    std::vector<std::vector<int> > res = {};
    for (size_t i = 0; i < a.size(); i++)
    {
        for (size_t j = 0; j < b.size(); j++)
        {
            a[i][j] += b[i][j];
        }
    }



    return a;
}

int main() {
    std::vector<int> x = {1,2,3};
    std::vector<std::vector<int>> y;
    y = matrixAddition({{1, 2, 3}, {3, 2 , 1}, {1, 1, 1}} , {{2, 2, 1}, {3, 2, 3}, {1, 1, 3}});
    for (auto i : y)
        for (auto j : i)
            std::cout << j << std::endl;
}
