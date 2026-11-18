#include "propcheck.h"

bool ssfm::iseven(int num){

    bool iseven;
    if((num % 2) == 0){

       iseven = true;

    }else{

        iseven = false;

    }
    return iseven;
}
bool ssfm::isodd(int num){

    bool isodd;
    if((num % 2) == 1){

        isodd = true;

    }else{

        isodd = false;

    }
    return isodd;
}
bool ssfm::isprime(int num){

    if(num <= 1){

       return false;

    }
    if(num == 2){

        return true;

    }
    for(int i = 2; i <= num / i; i++){

        if(num % i == 0){

            return false;

        }

    }
    return true;
}
