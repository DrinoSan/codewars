#include <iostream>
#include <bitset>

unsigned int countBits(unsigned long long n)
{
    std::string binary = std::bitset<8>(n).to_string();

    return std::count_if(std::begin(binary), std::end(binary), [](char c)
                         { return c == '1'; });
}

int main()
{
    std::cout << countBits(7) << std::endl;

    return 0;
}
