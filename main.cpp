#include <iostream>

using namespace std;

class Father{
protected:
    int height;
    //constructor
public:
     Father(int h){
        height = h;
        cout << "Father constructor is callded" << endl;
    }
};

class Mother{
protected:
    string skin;
    //constructor
public:
    Mother(string s){
        skin = s;
        cout << "Mother constructor is called " << endl;
    }
};

class Child : Father, Mother{
//constructor
public:
    Child(int x, string s): Father(x), Mother(s){
        cout << "Child constuctor is called." << endl;
    }

void display(){
    cout << "The height is " << height << endl;
    cout << "The skin color is " << skin << endl;
}
};


int main() {
   Child obj1(6, "yellow");
   obj1.display();

}