#include <iostream>

using namespace std;

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // Accessing variables from different namespaces
    cout << "Value from first namespace: " << first::x << endl;
    cout << "Value from second namespace: " << second::x << endl;

    // Using the 'using' directive to bring a namespace into scope
    using namespace first;
    cout << "Value from first namespace after using directive: " << x << endl;

    return 0;
}