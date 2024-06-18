#include <iostream>
/*
int main(){
    int x; //declaration
    x=5; //assignement
    std::cout << x;
    return 0;
}

int main(){
    int x =5;
    int y = 6;
    int sum = x+y;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    return 0;
}
*/

int main(){
    //integer (whole numbers)
    int age = 21;
    int year = 2023;
    int days = 7;
    // double (number inculding decimal)
    double price = 10.99;
    double gpa =2.5;
    double temperature = 25.1;

    //singe character
    char grade = 'A';
    char initial = 'c';
    char dollarsign = '$';

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale= true;

    //string (objects that represents a sequence of text)
    std::string name = "nobody";
    std::string day = "monday";
    std::string food = "pizza";
    std::string address = "123 fake st.";
    
    std::cout << "hello " << name << '\n';
    std::cout << "you are " << age << " years old";

    return 0;
}
