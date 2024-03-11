#include <iostream>
using namespace std;

int main()
{
    // BMI calculator
    // weight (kg) / (height * height)(meters)
    // underweight < 18.5
    // normal weight 18.5 to 24.9
    // overweight > 25

    float weight, height, bmi;
    cout << "Weight(kg), height(m): ";
    cin >> weight >> height;

    bmi = weight / (height * height);

    if (bmi < 18.5)
        cout << "You are underweight" << endl;
    else if (bmi < 25)
        cout << "You are overweight" << endl;
    else
        cout << "You have a normal weight" << endl;

    cout << "Your bmi is " << bmi;

}