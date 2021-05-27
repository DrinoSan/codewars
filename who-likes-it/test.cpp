//You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the text that should be displayed next to such an item.

//Implement a function likes :: [String] -> String, which must take in input array, containing the names of people who like an item. It must return the display text as shown in the examples:
//
//
//likes [] -- must be "no one likes this"
//likes ["Peter"] -- must be "Peter likes this"
//likes ["Jacob", "Alex"] -- must be "Jacob and Alex like this"
//likes ["Max", "John", "Mark"] -- must be "Max, John and Mark like this"
//likes ["Alex", "Jacob", "Mark", "Max"] -- must be "Alex, Jacob and 2 others like this"
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
