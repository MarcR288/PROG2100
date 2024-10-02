#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int tons, stone, pounds, ounces;
    cout << " Imperial to Metric Conversion" << endl;

    cout << "\n Enter number of tons: ";
    cin >> tons;
    cout << "Enter number of stone: ";
    cin >> stone;
    cout << "Enter number of pounds: ";
    cin >> pounds;
    cout << "Enter number of ounces: ";
    cin >> ounces;

    // Calculate total ounces
    int totalOunces = (35840 * tons) + (224 * stone) + (16 * pounds) + ounces;

    // Convert total ounces to kilograms
    double totalKilos = totalOunces / 35.274;

    // Calculate metric tons, kilos, and grams
    int metricTons = static_cast<int>(totalKilos / 1000);
    double remainingKilos = totalKilos -(metricTons * 1000);
    int kilos = static_cast<int>(remainingKilos);
    double grams = (remainingKilos - kilos) * 1000;

    // Output the result
    cout << "\n The metric weight is " << metricTons << " metric tons, "
         << fixed << setprecision(2) << kilos << " kilos, and "
         << fixed << setprecision(1) << grams << " grams.\n" << flush;

    return 0;
}
