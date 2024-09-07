# Exp-11 Classes and Objects

## Aim:
To understand the concept of object-oriented programming (OOP) in C++ by creating classes with member variables and functions, using access specifiers, and utilizing constructors to perform tasks such as receiving user input, and calculating values.

## Software Used:
- Dev c++
  
## Theory:
Object-oriented programming (OOP) in C++ revolves around the use of "classes" to represent real-world objects. A class defines a blueprint consisting of attributes (data members) and behaviors (methods). Classes allow for encapsulation, which bundles the data and methods that operate on the data into one unit, making the program more modular and maintainable.

Classes in C++ also support the use of access specifiers such as public and private, which control the visibility of data members and methods. Public members can be accessed by any part of the program, while private members can only be accessed by member functions of the class. This ensures data security and integrity by preventing direct access to sensitive information.

## Program 1: Defining a Class
<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
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

```
<strong> Output: </strong>
<br>


## Program 2: Class with User Input
<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
class Book {
    public:
    string title;
    string author;
    int publicationYear;

    void userInput() {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter book author: ";
        cin >> author;

        cout << "Enter publication year: ";
        cin >> publicationYear;
    }

    void displayInfo() {
        cout << "Book details: " << title << " by " << author << " (" << publicationYear <<")"<< endl;
    }
};

int main() {
    Book myBook;
    myBook.userInput();
    myBook.displayInfo();
    return 0;
}
```
<strong> Output: </strong>
<br>


## Program 3: Area of Rectangle by Using Classes.
<strong> Code: </strong>
<br>
```cpp
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

```
<strong> Output: </strong>
<br>


## Program 4:  
<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
class Car{
  public:
  string make;
  string model;
  int year;
  void userInput(){
  cout<<"Enter car make: "<<endl;
  cin>>make;

cout<< "Enter car model: "<<endl;
cin>>model;

cout<<"Enter car manufacturing year: "<<endl;
cin>>year;
  }
  
void displayInfo(){
    cout<<"Car Details: "<<make<<" "<< model<< " "<<"("<<year<<")"<<endl;

}
};
int main()
{
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}
```
<strong> Output: </strong>
<br>


## Conclusion:
By implementing these examples, we learned the fundamentals of object-oriented programming in C++. We explored how to create classes, define member functions, and use access specifiers to ensure data security and abstraction. Additionally, we practiced obtaining user input, handling data within objects, and calculating values through class methods.




