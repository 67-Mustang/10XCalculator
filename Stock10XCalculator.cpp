// Stock10XCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

float calculateStock(float stockPrice, float prior12MonthsPrice);

int main()
{
    float stockPrice, prior12MonthsPrice;

    cout << "***10X STOCK CALCULATOR: AUTHORED BY STEVEN SHIVAYKA C 2022***" << endl;
    cout << "Enter stock price: " << endl;
    cin >> stockPrice;
    cout << "Enter price 12 months ago: " << endl;
    cin >> prior12MonthsPrice;
    if (stockPrice && prior12MonthsPrice > 0) {
        cout << "# of 10X of stock / crypto is: " << calculateStock(stockPrice, prior12MonthsPrice) << endl;
    }
    else {
        cout << "Invalid number.";
    }
    system("pause>0");
}

float calculateStock(float stockPrice, float prior12MonthsPrice) {
    return prior12MonthsPrice / stockPrice;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
