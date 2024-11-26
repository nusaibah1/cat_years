#include <iostream>


using namespace std;

int main() 


{ 
    int age = 1;
    int cat_years;
    cout << "How old are you?\n ";
    cin >> age;
    if(age <= 10 && age >= 1000) {
        cout << "Enter a valid age:  ";
         cin >> age;
    } 
    
    cout << "You are: \n " << age * 15 << "cat years old 🐈‍⬛";
}