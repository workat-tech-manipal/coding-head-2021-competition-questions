#include<stdio.h>
#include<random>
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
	
	while(i++< 8) 
    {
        vector<int>v1;
        vector<int>v2;
        //srand(time(0));
        int r = (rand() % 1000)+1;
        cout<<r<<"\n";
		for(int j=0;j<r;j++)
        {
            v1.push_back((rand()%10000)+1);
            v2.push_back((rand()%10000)+1);          
        }
        for(int k=0;k<v1.size();k++)
        {
            cout<<v1[k]<<" ";
        }
        cout<<"\n";
         for(int k=0;k<v1.size();k++)
        {
            cout<<v2[k]<<" ";
        }
	}
	return 0;
}