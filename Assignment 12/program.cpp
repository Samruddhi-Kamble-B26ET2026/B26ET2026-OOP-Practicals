#include <iostream>
using namespace std;
namespace ns1 {
    void display() {
        cout << "Display function from namespace ns1" << endl;
    }
}
namespace ns2 {
    void display() {
        cout << "Display function from namespace ns2" << endl;
    }
}
int main() {
    ns1::display();
    ns2::display();
    return 0;
}
