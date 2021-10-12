#include<stdio.h>
#include<random>
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
	srand(time(0));
	int t = (rand()%100)+1;
    cout<<t<<"\n";
	while(i++< t) {
		long long int r = (rand() % 6000000) + 1;
		cout <<r << "\n";
	}
	return 0;
}
