#include<bits/stdc++.h>
using namespace std;

class teacher {
private:
    double salary;
public:
    //properties
    string name;
    string dept;
    string subject;


    //methods
    void changedept(string newdept) {
        dept = newdept;
    }

    void setsalary(int s) {
        salary = s;
    }
    double getsalary() {
        return salary;
    }


};

int main() {
    teacher t1;
    t1.name = "Ariful";
    t1.dept = "Computer science";
    t1.subject = "C++";
    t1.setsalary(1);
    cout << t1.getsalary();

}