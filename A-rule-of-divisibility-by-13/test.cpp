#include <cstddef>
#include <iostream>


long long thirt(long long);

int main(){

    long long res = thirt(8529);
    std::cout << res << std::endl;
    return 0;
}


long long thirt(long long n){
    size_t digits = n;
    size_t counter;
    if ( n == 0 )
        return 0;

    while(digits != 0){
        digits = digits / 10;
        counter++;
    }

    for ( size_t i = 0; i < counter; ++i )
    {
        //Building the modulo numbers 

    }

}
