#include "hashing.hpp"

int hash_string(string s) {
    // implement hashing function here
    int sum=0;
    int m=61;
    for(int i=0; i<s.size(); i++)
    {
      sum = (sum + s[i])%m;
    }
    return sum;
}
