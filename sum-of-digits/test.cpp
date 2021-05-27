//Digital root is the recursive sum of all the digits in a number.

//Given n, take the sum of the digits of n. If that value has more than one digit, continue reducing in this way until a single-digit number is produced. The input will be a non-negative integer.
//
//
//
//Examples
    //16  -->  1 + 6 = 7
   //942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
//132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
//493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2
//
#include <cstddef>
#include <iostream>

using namespace std;
int digital_root(int);


int main(){
    u_int res;
    res = digital_root(1528);


    cout << res << endl;
    return 0;
}


int digital_root(int n)
{
    int res = 0;
    while (n){
        res += n%10;
        n = n / 10;
    }
    return (res > 9) ? digital_root(res) : res;

}


/* int digital_root(int n) */
/* { */
/*     int res; */
/*     int temp = 11; */
/*     while (temp >= 10){ */
/*         while (n){ */
/*             res += n%10; */
/*             n = n / 10; */
/*         } */
/*         n = res; */
/*         temp = res; */
/*         res = 0; */
/*         cout << n << endl; */

/*     } */
/*     return temp; */

/* } */
