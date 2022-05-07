// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: May. 4, 2022
// This program asks the user for base and height of triangle
// then calculate it using the CalculateArea function


#include <iostream>
// import decimal
#include <iomanip>
#include <string>

// function to calculate the area of triangle
void CalculateArea(float height , float base) {
    float area;
    area = height * base / 2;

    // display the answer
    std::cout << std::fixed << std::setprecision(2) <<
                 "The Area of triangle is " << area << "cm²" << std::endl;
}

main() {
    // variables
    float triangle_base_float;
    float triangle_height_float;
    std::string triangle_base_string;
    std::string triangle_height_string;

    // cast inputs to float
    try {
    // user inputs
        std::cout << "Enter the base of the triangle (cm): ";
        std::cin >> triangle_base_string;
        std::cout << "Enter the width of a rectangle (cm): ";
        std::cin >> triangle_height_string;
        std::cout << std::endl;
        triangle_height_float = std::stof(triangle_height_string);
        triangle_base_float = std::stof(triangle_base_string);
    }
    catch (std::invalid_argument) {
        std::cout <<"Invalid input. Input was not a number" << std::endl;
  }
    // check if user input is 0 or less
    if (triangle_height_float <= 0 || triangle_base_float <= 0){
        std::cout <<"Invalid input. Input cannot be 0 or less." << std::endl;
    } else {
        // calling the function
        CalculateArea(triangle_base_float, triangle_height_float);
    }
    
}
