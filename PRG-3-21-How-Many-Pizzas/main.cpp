//
//  main.cpp
//  PRG-3-21-How-Many-Pizzas
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Modify the program you wrote in Programming Challenge 20 (Pizza Pi) so it reports
//  the number of pizzas you need to buy for a party if each person attending is expected
//  to eat an average of four slices. The program should ask the user for the number of
//  people who will be at the party, and for the diameter of the pizzas to be ordered. It
//  should then calculate and display the number of pizzas to purchase.


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float fltPizzaDiamter,
    fltPizzaRadius,
    fltPizzaArea,
    fltPizzaSlicesTotal,
    fltPizzas,
    fltPartyGuests;
    
    float const FLT_PIZZA_SLICE_AREA = 14.125f,
    FLT_PI = 3.14159f,
    FLT_SLICES_PER_GUEST = 4.0f;
    
    cout << "Please enter the diameter of your pizza: " << endl;
    cin >> fltPizzaDiamter;
    cout << "Please enter how many people will be attending your party: " << endl;
    cin >> fltPartyGuests;
    
    fltPizzaRadius = fltPizzaDiamter / 2.0f;
    
    fltPizzaArea = FLT_PI * pow(fltPizzaRadius, 2.0f);
    
    fltPizzaSlicesTotal = fltPizzaArea / FLT_PIZZA_SLICE_AREA;
    
    fltPizzas = (fltPartyGuests * FLT_SLICES_PER_GUEST) / fltPizzaSlicesTotal;
    
    cout << "You will need to order "
    << setprecision(0) << fixed << fltPizzas << endl
    << setprecision(1) << fixed << fltPizzaDiamter << " inch"
    << " pizzas." << endl;
    
    return 0;
}



