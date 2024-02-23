//****************************************************************************************************
//     File:               A4_Ingredients.cpp
// 
//     Student:            Anna Sargsyan
// 
//     Assignment:         Program #4
// 
//     Course Name:        Programming I
// 
//     Course Number:      COSC 1550-01
// 
//     Due:                February 20, 2023
//
//     This program asks the user to input the price of each ingredients used 
//     for cooking cookies, then calculates the total price of  
//     ingredients used for making 20 dozen Chocolate Chips cookies.
//  
//     
//
//****************************************************************************************************

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//****************************************************************************************************
int main()
{
    double butterPrice,
        whiteSugarPrice,
        eggsPrice,
        vanilaExtractPrice,
        allPurposeFlourPrice,
        bakingSodaPrice,
        chocolateChipsPrice;

    const double DOZEN = 20,
    BUTTER_CUP = 5,
    WHITE_SUGAR_CUPS = (7.5),
    EGGS = 10,
    VANILA_EXTRACT_TSP = 10,
    ALL_PURPOSE_FLOUR_CUPS = 10,
    BAKING_SODA_TSP = 5,
    CHOCOLOATE_CHIPS_CUPS = 10;

    double butterCost,
        sugarCost,
        eggsCost,
        vanilaCost,
        flourCost,
        sodaCost,
        chipsCost,
        totalCost;


    cout << "Enter the unit price of each ingredient in the following order:\n\n";

    cout << "butter (cups) \n";
    cout << "white sugar (cups)\n";
    cout << "eggs \n";
    cout << "vanila extract (tsp)\n";
    cout << "all-purpose flour (cups)\n";
    cout << "baking soda (tsp)\n";
    cout << "chocolate chips (cups)\n";

    cin >> butterPrice >> whiteSugarPrice >> eggsPrice >> vanilaExtractPrice
        >> allPurposeFlourPrice >> bakingSodaPrice >> chocolateChipsPrice;
   
     
    butterCost = butterPrice * BUTTER_CUP;
    sugarCost = whiteSugarPrice * WHITE_SUGAR_CUPS;
    eggsCost = eggsPrice * EGGS;
    vanilaCost = vanilaExtractPrice * VANILA_EXTRACT_TSP;
    flourCost = allPurposeFlourPrice * ALL_PURPOSE_FLOUR_CUPS;
    sodaCost = bakingSodaPrice * BAKING_SODA_TSP;
    chipsCost = chocolateChipsPrice * CHOCOLOATE_CHIPS_CUPS;

    totalCost = butterCost + sugarCost + eggsCost + vanilaCost + flourCost
        + sodaCost + chipsCost;
    
    cout << endl;
    cout << "20 dozens Chocolate Chip Cookies Cost:" << endl;
    cout << endl;

    cout << fixed << setprecision(2);

    cout << left << setw(20) << "Ingredients" << setw(10) << "unit"
        << setw(10) << "unit price" << right << setw(10) << "total" << endl;
    
    cout << left << setw(20) << "Butter" << setw(10) << "1 cup"
        << setw(10) << butterPrice << right << setw(10) << butterCost << endl;

    cout << left << setw(20) << "White Sugar" << setw(10) << "1 cup" 
        << setw(10)  << whiteSugarPrice << right << setw(10) 
        << sugarCost << endl;

    cout << left << setw(20) << "Eggs" << setw(10) << "each"
        << setw(10) << eggsPrice << right << setw(10) << eggsCost << endl;

    cout << left << setw(20) << "Vanila Extract" << setw(10) << "1 tsp"
        << setw(10) << vanilaExtractPrice << right << setw(10) 
        << vanilaCost <<endl;

    cout << left << setw(20) << "All-Purpose Flour" << setw(10) << "1 cup"
        << setw(10) << allPurposeFlourPrice << right << setw(10) 
        << flourCost << endl;

    cout << left << setw(20) << "Baking soda" << setw(10) << "1 tsp"
        << setw(10) << bakingSodaPrice << right << setw(10) << sodaCost << endl;

    cout << left << setw(20) << "Chocolate Chips" << setw(10) << "1 cup"
        << setw(10) << chocolateChipsPrice << right << setw(10) 
        << chipsCost << endl;

    cout << endl;

    cout << left << setw(40) <<"Total" << right << setw(10) 
        << totalCost << endl;


        return 0;
}
    
//****************************************************************************************************

/*

Enter the unit price of each ingredient in the following order:

butter (cups)
white sugar (cups)
eggs
vanila extract (tsp)
all-purpose flour (cups)
baking soda (tsp)
chocolate chips (cups)
2.49 0.18 0.25 0.69 0.34 0.04 1.39

20 dozens Chocolate Chip Cookies Cost:

Ingredients         unit      unit price     total
Butter              1 cup     2.49           12.45
White Sugar         1 cup     0.18            1.35
Eggs                each      0.25            2.50
Vanila Extract      1 tsp     0.69            6.90
All-Purpose Flour   1 cup     0.34            3.40
Baking soda         1 tsp     0.04            0.20
Chocolate Chips     1 cup     1.39           13.90

Total                                        40.70

*/