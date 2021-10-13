#include <iostream>
#include <math.h>
#include<vector>
class Solution {
public:
    bool canPlacecones(std::vector<bool>& bed, int n) {
        for (int i = 0; i < bed.size(); i++) {
            if (!bed[i] && (i == 0 || !bed[i - 1]) && (i == bed.size() - 1 || !bed[i + 1])) {
                bed[i] = 1;
                n--;
            }
        }
        return bool(n <= 0);
    }
};
int main(){
   int test_case;
   std::cin>>test_case;
   while (test_case--)
   {
       Solution ob;
       int arr_size;
       int ele;
       std::cin>>arr_size;
       std::vector<bool> v;
       for(int i=0;i<arr_size;i++)
       {
           std::cin>>ele;
           v.push_back(ele);
       }
       int cones;
       std::cin>>cones;
   std::cout << bool(ob.canPlacecones(v, cones));
   }
   
   
}
