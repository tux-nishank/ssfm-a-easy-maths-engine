#include "vec2.h"

ssfm::vec2::vec2(float a, float b){

    x = a;

    y = b;

}
ssfm::vec2 ssfm::vec2::add(float a, float b){

    return ssfm::vec2{x + a, y + b};

}

ssfm::vec2 ssfm::vec2::sub(float a, float b){

    return ssfm::vec2{x - a, y - b};

}
