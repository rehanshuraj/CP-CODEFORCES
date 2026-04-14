#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<double> getAngles(vector<int>& sides) {

        double a = sides[0];
        double b = sides[1];
        double c = sides[2];
        
        if (a + b <= c || a + c <= b || b + c <= a) {
            return {};
        }
        
        double p = acos(-1.0);
        
        double angle1 = acos((b * b + c * c - a * a) / (2.0 * b * c)) * 180.0 / p;
        double angle2 = acos((a * a + c * c - b * b) / (2.0 * a * c)) * 180.0 / p;
        double angle3 = acos((a * a + b * b - c * c) / (2.0 * a * b)) * 180.0 / p;
        
        vector<double> a = {angle1, angle2, angle3};
        sort(a.begin(), a.end());
        
        return a;
    }
};