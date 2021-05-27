#include <vector>
#include <iostream>

using namespace std;
std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int> res (input.begin(), input.end());
    for (size_t i = 0; i < res.size(); i++){
        if (res[i] == 0){
            res.push_back(0);
            res.erase(res.begin() + i);
        }
    }


    for(auto el : res){
        cout << el << " " << endl;
    }
    return res;
}


int main()
{
    std::vector<int> x = {1, 2, 0, 1, 0, 1, 0, 3, 0, 1};

    move_zeroes(x);
}
