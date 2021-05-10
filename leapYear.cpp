// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program checks if it is a leap year or common year

#include <iostream>
#include <string>

int main() {
    // this function checks if you are old enough
    std::string year_string;
    int chosen_year;

    // input
    std::cout << "Enter the year you have chosen: ";
    std::cin >> year_string;
    std::cout << "" << std::endl;

    // process & output
    try {
        chosen_year = std::stoi(year_string);

        if (chosen_year % 4 == 0) {
            if (chosen_year % 100 != 0) {
            std::cout << "This is a leap year " << std::endl;
            } else {
                if (chosen_year % 400 == 0) {
                    std::cout << "This is a leap year " << std::endl;
                } else {
                    std::cout << "This is a common year " << std::endl;
                }
            }
        } else {
            std::cout << "This is a common year " << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << "Invalid Input" << std::endl;
    }
}
