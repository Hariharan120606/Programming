#include <iostream>
using namespace std;
class MyClass {
private:
    int privateVar=10;
protected:
    int protectedVar=20;
public:
    int publicVar=30;
void display() 
{ 
cout << "Private Variable: " << privateVar << endl; 
cout << "Protected Variable: " << protectedVar << endl; 
cout << "Public Variable: " << publicVar <<endl; 
} 
};
int main() {
    MyClass obj;
    obj.display(); 
    return 0;
}

