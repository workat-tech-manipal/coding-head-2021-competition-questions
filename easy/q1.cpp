#include <iostream>
#include <math.h>

int main()
{
  int t,n;
  std::cin>>t;
  float y;
  do
  {
      std::cin>>n;
      y = ((n*n)/2);
      std::cout<<y;
      t--;
  }
  while(t);
  return 0;
}
