
#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay(double amount) = 0;
};

class CreditCard : public Payment {
public:
    void pay(double amount) override {
        cout << "Paid " << amount << " using Credit Card\n";
    }
};

class UPI : public Payment {
public:
    void pay(double amount) override {
        cout << "Paid " << amount << " using UPI\n";
    }
};

int main() {
    Payment* p1 = new CreditCard();
    Payment* p2 = new UPI();

    p1->pay(1500);
    p2->pay(800);

    delete p1;
    delete p2;
    return 0;
}
