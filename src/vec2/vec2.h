#ifndef SSFM_SRC_VEC2_VEC2_H
#define SSFM_SRC_VEC2_VEC2_H

namespace ssfm{

    class vec2{

        public:

        float x, y;

        vec2(float a, float b);

        vec2 add(float a, float b);

        vec2 sub(float a, float b);

    };

}



#endif
