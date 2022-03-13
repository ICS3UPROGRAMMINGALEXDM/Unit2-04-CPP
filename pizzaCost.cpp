// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 02/11/22
// Description: This program calculates the cost of a pizza
#include <iostream>

// declaring what the stds
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
  // declaring constants
  const float LABOUR_COST = 2.00, RENT_COST = 2.25;
  const float HST = 0.13, INGREDIENTS = 1.50;
  // declaring variables
  float dia;
  float subtotal, tax, total;

  // getting input
  cout << "What is the diameter of the pizza?" << endl;
  cin >> dia;

  // calculations
  subtotal = dia * INGREDIENTS + LABOUR_COST + RENT_COST;
  tax = subtotal * HST;
  total = subtotal + tax;
  // found a new way to display to user - using printf display total
  printf("It will cost you $%.2f to make this pizza.\n" , total);
}
