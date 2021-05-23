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
