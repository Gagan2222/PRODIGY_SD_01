#include <iostream>

using namespace std;

int main() {
    float temp, celsius, kelvin, fahrenheit;
    char unit;
    char choice;

    do {
        cout << "Enter the Unit of Temperature (C-Celsius, F-Fahrenheit, K-Kelvin): ";
        cin >> unit;
        cout << "Enter the temperature: ";
        cin >> temp;

        switch(unit) {
            case 'C':
            case 'c':
                fahrenheit = ((9.0/5) * temp) + 32;
                kelvin = temp + 273.15;
                cout << temp << "\370C in Fahrenheit is " << fahrenheit << "\370F" << endl;
                cout << temp << "\370C in Kelvin is " << kelvin << "K" << endl;
                break;

            case 'F':
            case 'f':
                celsius = (5.0/9) * (temp - 32);
                kelvin = (5.0/9) * (temp - 32) + 273.15;
                cout << temp << "\370F in Celsius is " << celsius << "\370C" << endl;
                cout << temp << "\370F in Kelvin is " << kelvin << "K" << endl;
                break;

            case 'K':
            case 'k':
                celsius = temp - 273.15;
                fahrenheit = ((9.0/5) * (temp - 273.15)) + 32;
                cout << temp << "K in Celsius is " << celsius << "\370C" << endl;
                cout << temp << "K in Fahrenheit is " << fahrenheit << "\370F" << endl;
                break;

            default:
                cout << "Invalid unit of temperature entered." << endl;
        }

        cout << "Do you want to perform another conversion? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
