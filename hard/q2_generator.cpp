#include<stdio.h>
#include<random>
#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
    int i = 0;
	int t = (rand()%100)+1;
    cout<<t<<"\n";
	while(i++< t) {
		long long int r = (rand() % 59999) + 2;
		cout <<r << "\n";
	}
	return 0;
}
