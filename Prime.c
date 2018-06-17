#include "Prime.h"
#include <stdbool.h>


bool isPrime(int prim){
    bool prime = true;

    for(int i = 2; i < prim/2+1; i++){
        if(prim%i == 0){
            prime = false;
            break;
        }
    }

    return prime;

}
