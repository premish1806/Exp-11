#include <iostream>
using namespace std;
class Car {
public:
    string make = "Kia";   
    string model = "Seltos";  
    int year = 2024;
};
int main() {
    Car myCar;
    cout << "Car Details: " << myCar.make << " " << myCar.model << " (" << myCar.year << ")"<<endl;
    return 0;
}
