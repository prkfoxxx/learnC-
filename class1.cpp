#include <iostream.h>       //header file
#include <conio.h>          // header file

using namespace std;

class Student {                             // class named student is defined .
public:
    
    string name[10];
    int age;
    
    void read(){
        
        cout << "Enter the name of the student" ;
        cin >> name;
        
        cout << "Enter the age of the student";
        void print(){
            
            cout << "Name of the student is : %s" << name ;         // print the name of the student
            
            cout << " Age of the student is: %d" << age ;           // print the age of the student
        }
    };
    
    void main(){
        
        Student.s;  // object of the class is defined
        
        s.read();
    }    cin >> age ;
        
    }
    

