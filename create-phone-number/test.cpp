#include <cstddef>
#include <string>
#include <iostream>

std::string createPhoneNumber(const int arr [10]){
    std::string res = "(";


    size_t i;
    for (i = 0; i < 3; i++){
        res += std::to_string(arr[i]);
    }
    res += ") ";
    
    for(; i < 6; i++){
        res += std::to_string(arr[i]);
    }

    res += "-";
    
    for (; i < 10; i++){
        res += std::to_string(arr[i]);
    }


    return res;
}



int main(){

    using arr = int [10];
    std::cout << createPhoneNumber(arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) << std::endl;



    return 0;
}
