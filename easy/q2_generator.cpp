#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i=0;
    while(i++<8)
    {
    srand(time(0));
    int arr_size = (rand() % 20000) + 1;
    cout<<arr_size<<"\n";
    int num_cone = (rand() % arr_size) + 1;
    vector<bool>v;
    int i;
    do
    {
        v.push_back((rand() % 2));
        arr_size--;
    } while (arr_size);
    for (auto it =v.begin(); it != v.end(); ++it)
        cout << ' ' << *it;
    cout<<"\n"<<num_cone<<"\n";
    }
}