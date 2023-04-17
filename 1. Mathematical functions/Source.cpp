
#include "Header.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>




int pluse(int pole, int pole_2) {
    std::cout << pole << " + " << pole_2 << " = " << pole + pole_2;
    return pole + pole_2;
}
int minus(int pole, int pole_2) {
    std::cout << pole << " - " << pole_2 << " = " << pole - pole_2;
    return pole - pole_2;
}
int mult(int pole, int pole_2) {
    std::cout << pole << " * " << pole_2 << " = " << pole * pole_2;
    return pole * pole_2;
}
int division(int pole, int pole_2) {
    std::cout << pole << " / " << pole_2 << " = " << pole / pole_2;
    return pole / pole_2;
}
void expon(int pole, int pole_2) {

    std::cout << pole << " в степени " << pole_2 << " = " << pow(pole, pole_2);
}