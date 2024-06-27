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

};


int main() {
    bank b1("arif", "Akhi", 1000);
    bank b2("akhi", "Arif", 2000);
    b1.getinfo();
    b2.getinfo();
}