#include "hashing.hpp"

int hash_string(string s, int m) {
    // implement hashing function here
    int sum=0;
    int p=41;
    int mult=1;
    for(int i=0; i<s.size(); i++)
    {
        sum = (sum + s[i]*mult)%m;
        mult= (mult*p)%m;
    }
    return sum;
}
