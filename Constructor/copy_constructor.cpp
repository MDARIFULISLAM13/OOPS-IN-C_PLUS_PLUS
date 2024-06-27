#include<bits/stdc++.h>
using namespace std;
class bank {
public:
    bank(string n, string p, int b) {
        name = n;
        password = p;
        balance = b;
    }
    string name;
    string password;
    int balance;
    void getinfo() {
        cout << name << endl;
        cout << password << endl;
        cout << balance << endl;
    }
    //custom copy constructor
    bank(bank& orgobj) {
        cout << "I AM COPY CONSTRUCTOR\n";
        this->name = orgobj.name;
        this->balance = orgobj.balance;
    }


};


int main() {
    bank b1("arif", "Akhi", 1000);
    bank b2(b1);

    b2.getinfo();
}