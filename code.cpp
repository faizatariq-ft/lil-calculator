#include <iostream>
#include <iomanip> 
using namespace std;
void length();
void weight();
void temperature();

int main() {
    int choice;
    cout << fixed << setprecision(2);

    do {
        cout << "\n==========================" << endl;
        cout << "    UNIT CONVERTER   " << endl;
        cout << "==========================" << endl;
        cout << "1. Length (Meters/Feet/Miles)" << endl;
        cout << "2. Weight (KG/Pounds/Grams)" << endl;
        cout << "3. Temperature (Celsius/Fahrenheit)" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: length(); break;
            case 2: weight(); break;
            case 3: temperature(); break;
            case 4: cout << "Goodbye! :)" << endl; break;
            default: cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

void length() {
    int subChoice;
    double value;
    cout << "\n1. Meters to Feet\n2. Feet to Meters\n3. Miles to Kilometers" << endl;
    cout << "Choice: ";
    cin >> subChoice;
    cout << "Enter value: ";
    cin >> value;

    if (subChoice == 1) cout << value << "m = " << value * 3.28084 << " ft" << endl;
    else if (subChoice == 2) cout << value << "ft = " << value / 3.28084 << " m" << endl;
    else if (subChoice == 3) cout << value << "miles = " << value * 1.60934 << " km" << endl;
}

void weight() {
    int subChoice;
    double value;
    cout << "\n1. Kilograms to Pounds\n2. Pounds to Kilograms\n3. Grams to Kilograms\n4. Kilograms to Grams" << endl;
    cout << "Choice: ";
    cin >> subChoice;
    cout << "Enter value: ";
    cin >> value;

    if (subChoice == 1) cout << value << "kg = " << value * 2.20462 << " lbs" << endl;
    else if (subChoice == 2) cout << value << "lbs = " << value / 2.20462 << " kg" << endl;
    else if (subChoice == 3) cout<< value << "g = " << value * 1000 << " kg" << endl;
    else if (subChoice == 4) cout << value << " kg = " << value / 1000 << " g" << endl;
}

void temperature() {
    int subChoice;
    double value;
    cout << "\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius" << endl;
    cout << "Choice: ";
    cin >> subChoice;
    cout << "Enter temperature: ";
    cin >> value;

    if (subChoice == 1) cout << value << "C = " << (value * 9/5) + 32 << " F" << endl;
    else if (subChoice == 2) cout << value << "F = " << (value - 32) * 5/9 << " C" << endl;
}
