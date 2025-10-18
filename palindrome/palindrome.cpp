#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // mesmo código q a implementação em .py

        // se colocar só int ao invés de long int da problema de overflow
            // tem como resolver de outro jeito, mas esse foi o que achei mais fácil, mas ainda pode dar problema se passar o range do long int
        long int aux = x;
        long int reverso = 0;

        while (aux > 0){
            int digito = aux % 10;
            reverso = reverso * 10 + digito;
            aux /= 10;
        }

        return x == reverso;
    }
};
