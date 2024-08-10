#include <iostream> 
using namespace std; 

int add(int, int); 

int main(){ 
  int a=5,b=6,ans; 
  ans = add(a,b); 
  cout<<"Addition is="<<ans; 
  return 0; 
} 
int add(int x,int y) 
{ 
  return x+y; 
} 

