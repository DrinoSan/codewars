#include <iostream>
#include <map>


int main(){
    std::string name = "Troolll";
    std::map<char, int> counter;
    for (auto c : name){
        counter[c]++;
    }

    std::map<char, int>::iterator it = counter.begin();
    for (; it != counter.end(); ++it){
        if (it->second >= 2)
            std::cout << it->first << std::endl;
    }
    


    return 0;
}
