#include <iostream>
#include <vector>
using namespace std;

int main() {
    double celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 1.80 + 32.00;

    cout << "Kelvin: " << kelvin << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
} 