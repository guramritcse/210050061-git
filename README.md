# README

| Name | Roll number |
| ----------- | ----------- |
| Guramrit Singh | 210050061 |

# Description about repository
- This repository is about **hash function** used in hashing.
- Our hash function is based upon the scheme of polynomial accumulation along with taking mod with a prime.
- Our hash function initialises ```int sum=0``` takes a character in ```string s``` which will be ```s[i]``` , do ```for(int i=0; i< s.size(); i++)``` $$sum = (sum + s[i] * p^i)\text{ mod } m$$ where ```m``` is number passed by ```main()``` and ```p``` is number initialised inside hash function (*as my roll number is 210050061, both m and p are 41 for my code*) and finally returns sum as the hash value. 
- One **utility of hash function** is to map a list of **stations** into a **dictionary storing them** using **key as their name**.

## Running the code
```bash
./test.sh <string_text>
```

## Solution to q1
```bash
alias sizeOfFiles='du -ah'
alias numberOfFiles='du -ah| wc -l'
```

###  References
1. https://www.cyberciti.biz/faq/bash-for-loop/#Syntax
2. https://m.youtube.com/watch?v=RGOj5yH7evk
