//Move the first letter of each word to the end of it, then add "ay" to the end of the word. Leave punctuation marks untouched.
//Examples

//pigIt('Pig latin is cool'); // igPay atinlay siay oolcay
//pigIt('Hello world !');     // elloHay orldway !



#include <cctype>
#include <string>
#include <iostream>

#define START 0


using namespace std;
std::string pig_it(std::string str)
{

    std::string word;
    std::string res;
    int pos;
    int i=0;
    while (true){
        pos = str.find(" ");
        if (pos != std::string::npos){
            word = str.substr(START, pos);
            str = str.substr(pos+1);
            if (word.size() == 1 && !isalpha(word[0])){
                res += word + " ";
                word = "";
                continue;
            }
            cout << "Before word: " << word << endl;
            word = word.substr(1) + word[0] + "ay ";
            res += word;
            word = "";
        }
        else{
            if(!isalpha(str[str.size()-1])){
                res += str[str.size()-1];
                break;
            }
            res += str.substr(1) + str[0] + "ay";
            break;
        }
    }
        
    return res;
}


int main(){


    /* std::string res = pig_it("This is my string"); */
    std::string res = pig_it(". Sandi Hier da !");
    std::cout << res << std::endl;
    
    return 0;
}
