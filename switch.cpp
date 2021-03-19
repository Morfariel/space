#include <iostream>

int main() {
    double eweight;
    double cweight;
    int planet;
    std::cout << "Please enter your earth weight: "; 
    std::cin >> eweight;
    std::cout << "Please enter the number of planet you want to fight on (1-7): ";
    std::cin >> planet;

    switch (planet) {
	case 1: 
	    cweight = eweight * 0.38;
	    break;
	case 2:
	    cweight = eweight * 0.91;
	    break;
	case 3:
	    cweight = eweight * 0.38;
	    break;
	case 4:
	    cweight = eweight * 2.34;
	    break;
	case 5:
	    cweight = eweight * 1.06;
	    break;
	case 6:
	    cweight = eweight * 0.92;
	    break;
	case 7:
	    cweight= eweight * 1.19;
	    break;
	default:
	    std::cout << "invalid\n";
	    return 0;
    }

    std::cout << "Your weight on planet " << planet << " would be " << cweight  << ".\n";
}
