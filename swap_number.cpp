#include <iostream>

using namespace std;

int main() {  
    int a = 1;  
    int b = 2;  
    cout << "Before swappping: a = " << a << ", b = " << b << endl;  
    a = a + b;
    b = a - b;
    a = a - b; 
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
