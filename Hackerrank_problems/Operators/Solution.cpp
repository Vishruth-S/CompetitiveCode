#include <bits/stdc++.h>
using namespace std;

// Given below is th solve function
void solve(double meal_cost, int tip_percent, int tax_percent) {
float tip = (meal_cost*tip_percent)/100; //defining tip = mealcost*tip_percent/100
float tax = (meal_cost*tax_percent)/100;//defining tax = mealcost*tax_percent/100
float total = meal_cost + tax + tip;//defining total as sum of meal_cost +tip +tax
cout<<round(total);//printing round off of total since total is not an integeral value
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');//ignores the input buffer for next input

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);//function call

    return 0;
}
