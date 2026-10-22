#include "propcheck.hpp"

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
