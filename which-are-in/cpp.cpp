//Given two arrays of strings a1 and a2 return a sorted array r in lexicographical order of the strings of a1 which are substrings of strings of a2.

//Example 1:

//a1 = ["arp", "live", "strong"]

//a2 = ["lively", "alive", "harp", "sharp", "armstrong"]

//returns ["arp", "live", "strong"]

//Example 2:

//a1 = ["tarp", "mice", "bull"]

//a2 = ["lively", "alive", "harp", "sharp", "armstrong"]

//returns []

//Notes:

// # Arrays are written in "general" notation. See "Your Test Cases" for examples in your language.

// # In Shell bash a1 and a2 are strings. The return is a string where words are separated by commas.

// # Beware: r must be without duplicates.



#include <iostream>
#include <vector>

using namespace std;

bool sortFunc(std::string& s1, std::string& s2){
    if (static_cast<int>(s1[0]) == static_cast<int>(s2[0])){
        for(size_t i = 0; i < s1.size(); ++i){
            if (static_cast<int>(s1[i]) < static_cast<int>(s2[i]))
                return true;
        }
        return false;
    }else if (static_cast<int>(s1[0]) < static_cast<int>(s2[0]))
        return true;
    else
        return false;
}


std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2){
    std::vector<std::string> res;
    for (std::string& element1 : array1)
        for (std::string& element2 : array2)
            if (element2.find(element1) != std::string::npos)
            {
                res.push_back(element1);
                break;
            }



    std::sort(res.begin(), res.end(), sortFunc);
    return res;
}



int main(){
    std::vector<std::string> arr1 { "arp", "live", "strong" };
    std::vector<std::string> arr2 { "lively", "alive", "harp", "sharp", "armstrong" };



    std::vector<std::string> res = inArray(arr1, arr2);

    for(auto it = res.begin(); it != res.end(); ++it)
    {
        cout << *it << endl;
    }
    return 0;
}
