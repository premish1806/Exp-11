// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    void setDimensions(double len, double wid) {
        length = len;
        width = wid;
    }
    double calculateArea() {
        return length * width;
    }
};
int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}
