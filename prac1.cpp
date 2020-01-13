#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float a,b,c;
  cout << "Enter sides of triangle >\n";
  cin>>a>>b>>c;

  float s=(a+b+c)/2;

  float result=sqrt(s*(s-a)*(s-b)*(s-c));
  cout<<"\nResult:"<<result<<endl;
  
  return 0;
}