#include <bits/stdc++.h>
using namespace std;

class Math {
public:
    static float pointdistance(float x1, float y1, float x2, float y2) {
        float result = sqrt(pow(y2-y1, 2) + pow(x2-x1, 2));
        return result;
    }
};