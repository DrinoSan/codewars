#include <vector>
#include <map>

int findOdd(const std::vector<int>& numbers){
    std::map<int, int> mapRes;

    if (numbers.size() == 1)
        return numbers.at(0);

    for (auto &n : numbers)
        mapRes[n]++;

    for(auto i : mapRes)
        if (i.second % 2 != 0)
            return i.first;

    return 0;
}


int main(){
    using V = std::vector<int>;
    std::cout << findOdd(V{1,1,1,1,1,1,10,1,1,1,1}) << '\n';
    return 0;
}
