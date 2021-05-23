// chalange: https://www.codewars.com/kata/576757b1df89ecf5bd00073b/train/cpp
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int nFloors = 3;
    string s (((nFloors * 2) - 1), ' ');
    int mid = (int(s.length() / 2));
    vector<string> res;

    s[mid] = '*';

    for ( size_t i = 0; i < nFloors; i++ ){
        s[mid - i] = '*';
        s[mid + i] = '*';
        res.push_back(s);

    }

    for (auto& el : res){
        cout << el << endl;
    }


}
