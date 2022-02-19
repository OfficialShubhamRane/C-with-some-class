#include <iostream>

int main(){
    std::cout << "Welcome to JAPP!" << "\n";

    int pizza_area = 500;
    int required_slices = 1;

    std::cout << "How many slices are required? \n";
    std::cin >> required_slices;

    int slice_area = pizza_area / required_slices ;

    std::cout << "Each slice has area of " << slice_area << " units."<< "\n";
    printf("Each slice has area of [%i] units.", slice_area); // most stuuf from c will work inside of c++.

}