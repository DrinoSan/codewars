#include <iostream>
#include <string>
#include <vector>



using namespace std;


std::string likes(const std::vector<std::string> &names)
{

    std::string res {};
    if (names.size() > 3)
        res = names[0] + ", " + names[1] + " and "  +   std::to_string(names.size() - 2)   +    " others like this";
    else if(names.size() == 3)
        res = names[0] + ", " + names[1] + " and " + names[2] + " like this";
    else if(names.size() == 2)
        res = names[0] + " and " + names[1] + " like this";
    else if(names.size() == 1)
        res = names[0] + " likes this";
    else
        res = "no one likes this";


    return res; // Do your magic!
}




int main(){

    std::string res = likes({"Alex", "Jacob", "Mark", "Max"});
    std::cout << res << std::endl;
    res = likes({"Jacob", "Alex"});
    std::cout << res << std::endl;
    res = likes({"Max", "John", "Mark"});
    std::cout << res << std::endl;


    return 0;
}
