#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        vector<int> res (A.size(), -1);
        vector<pair<int, int>> As;
        vector<pair<int, int>> Bs;
        
        //Store as (index, value) pair
        for (int i=0; i<A.size(); i++)
        {
            As.push_back(make_pair(i, A[i]));
        }
        
        for (int i=0; i<B.size(); i++)
        {
            Bs.push_back(make_pair(i, B[i]));
        }
        
        //Sort by value using custom sort operator for pairs
        sort (As.begin(), As.end(), Solution());
        sort (Bs.begin(), Bs.end(), Solution());

        int i = 0, j = 0;
        for (; i<As.size(); )
        {
            if (As[i].second>Bs[j].second)
            {
                res[Bs[j].first] = As[i].second;    //Insert in to the right position in result
                As[i].first = As.size();            //Mark invalid
                i++;j++;
            }
            else
            {
                i++;
            }
        }
        
        //Insert remaining values from A into the result
        i = 0; j = 0;
        for (; i<res.size(); )
        {
            if (res[i] == -1)
            {
                while(j<As.size() && As[j].first == As.size())
                {
                    j++;    
                }
                if (j<As.size())
                    res[i] = As[j].second;
                j++;                                //Don't forget this
            }
            i++;
            
        }
        
        return res;
    }
    
    bool operator() (pair<int,int> a, pair<int,int> b)
    {
        return a.second<b.second;
    }
};
int main()
{
    Solution s1;
    vector<int>a = {1,2,46,7};
    vector<int>b ={6,5,1,0};
    a= s1.advantageCount(a,b);
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }
}
