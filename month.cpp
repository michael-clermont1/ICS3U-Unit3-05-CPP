// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program calculates the price of a pizza
//    with diameter inputted by the user and HST

#include <iostream>
#include <string>

int main() {
    // this function calculates the area and perimeter inputted by user
    std::string monthNumber;
    int numberFromUser;

    // input
    std::cout << "Enter the number of a month (ex: 1 for January): ";
    std::cin >> monthNumber;
    numberFromUser = atoi(monthNumber.c_str());
    std::cout << "" << std::endl;

    // process & output
    switch (numberFromUser) {
        case 1:
            std::cout << "The month is January!" << std::endl;
            break;
        case 2:
            std::cout << "The month is February!" << std::endl;
            break;
        case 3:
            std::cout << "The month is March!" << std::endl;
            break;
        case 4:
            std::cout << "The month is April!" << std::endl;
            break;
        case 5:
            std::cout << "The month is May!" << std::endl;
            break;
        case 6:
            std::cout << "The month is June!" << std::endl;
            break;
        case 7:
            std::cout << "The month is July!" << std::endl;
            break;
        case 8:
            std::cout << "The month is August!" << std::endl;
            break;
        case 9:
            std::cout << "The month is September!" << std::endl;
            break;
        case 10:
            std::cout << "The month is October!" << std::endl;
            break;
        case 11:
            std::cout << "The month is November!" << std::endl;
            break;
        case 12:
            std::cout << "The month is December!" << std::endl;
            break;
        default :
            std::cout << "That is not a month. ("
                << numberFromUser << ")" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
