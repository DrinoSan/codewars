#include <stddef.h>
#include <string.h>

size_t get_count(const char *s)
{
    int res = 0;
    while(*s) {
        if (strchr("aeiou", *s) != NULL){
            res++;
        }
        s++;
    }
    return res;
}


int main(){

    get_count("abracadabra");
    return 0;
}
