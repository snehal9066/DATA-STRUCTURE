#include<iostream>
#include"Vector.h"
using namespace std;
int main()
{
  Vector obj1,obj2;
  cin>>obj1;
  cin>>obj2;
  cout<<"Vectors are:"<<endl;
  cout<<obj1;
  cout<<obj2;
  Vector obj3;
  obj3=obj1+obj2;
  cout<<"Sum is:"<<obj3<<endl;
  Vector obj4;
  obj4=obj1^obj2;
  Vector obj5;
  obj5=obj1*obj2;
  cout<<"Vector product is:"<<obj5;
  return 0;
}


