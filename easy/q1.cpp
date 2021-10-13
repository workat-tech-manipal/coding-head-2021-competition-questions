#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  double n;
  int t;
  cin >> t;
  float y;
  while (t--)
  {
      cin>>n;
    y= ((n * n) / 2);
    cout<<ceil(y)<<"\n";
  }

  return 0;
}
