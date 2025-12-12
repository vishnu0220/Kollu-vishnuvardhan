#include<bits/stdc++.h>
using namespace std;

class Calculator {
    public:
        // double val1, val2;
    double add(double a, double b) {
        return a + b;
    }
    double sub(double a, double b) {
        return a - b;
    }
    double mul(double a, double b) {
        return a * b;
    }
    double div(double a, double b) {
        return a / b;
    }
};

int main() {
    double a, b;
    cin >> a >> b;
    string operation;
    cin >> operation;
    double ans;
    if(operation == "+") {
        Calculator c;
        ans = c.add(a, b);
    }
    else if(operation == "-") {
        Calculator c;
        ans = c.sub(a, b);
    }
    else if(operation == "*") {
        Calculator c;
        ans = c.mul(a, b);
    }
    else if(operation == "/") {
        Calculator c;
        ans = c.div(a, b);
    }
    else {
        cout << "Invalid operation!";
    }
    cout << a << operation << b << " = " << ans;
    return 0;
}