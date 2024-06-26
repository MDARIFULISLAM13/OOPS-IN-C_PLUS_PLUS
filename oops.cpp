#include<bits/stdc++.h>
using namespace std;

class teacher {
public:
    //properties
    string name;
    string dept;
    string subject;
    double salary;

    //methods
    void changedept(string newdept) {
        dept = newdept;
    }

};

int main() {
    teacher t1;
    t1.name = "Ariful";
    t1.dept = "Computer science";
    t1.subject = "C++";
    t1.salary = 300000;
    cout << t1.salary;

}