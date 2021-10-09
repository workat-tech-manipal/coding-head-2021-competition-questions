#include <iostream>
#include <math.h>
#include<vector>
class Solution {
public:
    bool canPlaceFlowers(std::vector<bool>& bed, int n) {
        for (int i = 0; i < bed.size(); i++) {
            if (!bed[i] && (i == 0 || !bed[i - 1]) && (i == bed.size() - 1 || !bed[i + 1])) {
                bed[i] = 1;
                n--;
            }
        }
        return n <= 0;
    }
};
int main(){
   Solution ob;
   std::vector<bool> v = {1,0,0,0,0,0,0,0,1};
   std::cout << (ob.canPlaceFlowers(v, 4));
}
