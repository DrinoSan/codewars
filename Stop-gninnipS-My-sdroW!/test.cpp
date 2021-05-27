//Write a function that takes in a string of one or more words, and returns the same string, but with all five or more letter words reversed (like the name of this kata).

// # Strings passed in will consist of only letters and spaces.
// # Spaces will be included only when more than one word is present.
//
//Examples:
//spinWords("Hey fellow warriors") => "Hey wollef sroirraw" 
//spinWords("This is a test") => "This is a test" 
//spinWords("This is another test") => "This is rehtona test"


#include <iostream>
#include <sstream>
#include <vector>
/* #include <boost/algorithm/string/split.hpp> */
/* #include <boost/algorithm/string/classification.hpp> // Include boost::for is_any_of */


using namespace std;


std::string spinWords(const std::string &str)
{
    std::string res;
    stringstream ss(str);
    std::istream_iterator<std::string> begin(ss);
    std::istream_iterator<std::string> end;
    std::vector<std::string> words(begin, end);
    std::copy(words.begin(), words.end(), std::ostream_iterator<std::string>(std::cout, "\n"));

    /* std::vector<std::string> words; */
    /* boost::split(words, str, boost::is_any_of(", "), boost::token_compress_on); */

    for(string& word : words){
        if (word.size() >= 5){
            reverse(word.begin(), word.end());
        }
        res += word + " ";
    }



    return res.substr(0, res.size()-1);
}// spinWords


int main(){

    std::string res;
    res = spinWords("Hey fellow warriors");
    cout << res << endl;
    
}
