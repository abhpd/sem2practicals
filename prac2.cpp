#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float x,y;
  cout << "Enter distance towards east >\n";
  cin>>x;
  cout << "Enter distance after turning right >\n";
  cin>>y;

  float result=sqrt(pow(x,2)+pow(y,2));

  cout<<"\nResult :"<<result<<endl;

  return 0;
}