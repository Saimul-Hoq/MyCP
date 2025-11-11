#include<iostream>
using namespace std;

int main() {
    int totalWeight = 15;
    int remainingWeight = totalWeight;

    int riceWeight, ricePrice;
    int lentilsWeight, lentilsPrice;
    int sugarWeight, sugarPrice;
    int saltWeight, saltPrice;
    int basmatiRiceWeight, basmatiRicePrice;


    cout << "Enter the weight (kg) and price (tk) of Rice: ";
    cin >> riceWeight >> ricePrice;

    cout << "Enter the weight (kg) and price (tk) of Lentils: ";
    cin >> lentilsWeight >> lentilsPrice;

    cout << "Enter the weight (kg) and price (tk) of Sugar: ";
    cin >> sugarWeight >> sugarPrice;

    cout << "Enter the weight (kg) and price (tk) of Salt: ";
    cin >> saltWeight >> saltPrice;

    cout << "Enter the weight (kg) and price (tk) of Basmati Rice: ";
    cin >> basmatiRiceWeight >> basmatiRicePrice;

    float riceProfitPerKg = ricePrice / float(riceWeight);
    float lentilsProfitPerKg = lentilsPrice / float(lentilsWeight);
    float sugarProfitPerKg = sugarPrice / float(sugarWeight);
    float saltProfitPerKg = saltPrice / float(saltWeight);
    float basmatiRiceProfitPerKg = basmatiRicePrice / float(basmatiRiceWeight);

    cout << "\nProfit per kg for each product: \n";
    cout << "Rice: " << riceProfitPerKg << " tk/kg\n";
    cout << "Lentils: " << lentilsProfitPerKg << " tk/kg\n";
    cout << "Sugar: " << sugarProfitPerKg << " tk/kg\n";
    cout << "Salt: " << saltProfitPerKg << " tk/kg\n";
    cout << "Basmati Rice: " << basmatiRiceProfitPerKg << " tk/kg\n";

    int totalCost = 0;
    int totalWeightSelected = 0;

    if (remainingWeight >= basmatiRiceWeight) {
        totalCost += basmatiRicePrice;
        totalWeightSelected += basmatiRiceWeight;
        remainingWeight -= basmatiRiceWeight;
        cout << "Selected: " << basmatiRiceWeight << "kg of Basmati Rice\n";
    }

    if (remainingWeight >= riceWeight) {
        totalCost += ricePrice;
        totalWeightSelected += riceWeight;
        remainingWeight -= riceWeight;
        cout << "Selected: " << riceWeight << "kg of Rice\n";
    }

    if (remainingWeight >= lentilsWeight) {
        totalCost += lentilsPrice;
        totalWeightSelected += lentilsWeight;
        remainingWeight -= lentilsWeight;
        cout << "Selected: " << lentilsWeight << "kg of Lentils\n";
    }

    if (remainingWeight >= saltWeight) {
        totalCost += saltPrice;
        totalWeightSelected += saltWeight;
        remainingWeight -= saltWeight;
        cout << "Selected: " << saltWeight << "kg of Salt\n";
    }

    if (remainingWeight >= sugarWeight) {
        totalCost += sugarPrice;
        totalWeightSelected += sugarWeight;
        remainingWeight -= sugarWeight;
        cout << "Selected: " << sugarWeight << "kg of Sugar\n";
    }

    cout << "\nTotal Weight Selected: " << totalWeightSelected << " kg\n";
    cout << "Total Cost: " << totalCost << " tk\n";
    cout << "Remaining weight: " << remainingWeight << " kg\n";

    if (remainingWeight > 0) {
        cout << "Note: Unable to reach exact 15kg with the available products.\n";
    } else {
        cout << "Successfully selected 15kg of products!\n";
    }

    return 0;
}
