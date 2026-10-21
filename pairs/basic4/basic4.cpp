 #include "basic4.hpp"
#include <iostream>
double ssfm::add(double a, double b){

     return a + b;

}
double ssfm::sub(double a, double b){

    return a - b;

}
double ssfm::div(double a, double b){

    double res;
    if(b == 0){

        std::cerr << "SSFM error: cannot divide by 0, fallback has been done to 0\n";
        res = 0.0;
    }else{

        res = a / b;
    }
    return res;
}
double ssfm::multip(double a, double b){

    return a * b;

}
