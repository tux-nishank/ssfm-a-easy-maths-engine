#include  <iostream>
#include "perc.hpp"

double ssfm::perc(double part, double whole){
    double res;
    if(whole == 0){

        std::cerr << "SSFM error: whole cannot be 0, it has returned 0 as a fallback\n";
        return 0.0;
    }else {res = (part / whole) * 100;}
    return res;
}

double ssfm::perc_of(double perc, double value){

    return (perc / 100) * value;

}
