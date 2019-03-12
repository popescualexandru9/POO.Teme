#include "pch.h"
#include <iostream>
#include "Matrice.h"


int main()
{
	matrice A,B;
	std::cout << "\n";
	std::cout << "Prima matrice  \n";
	std::cin >> A;
	std::cout << A;
	std::cout << "A doua matrice \n";
	std::cin >> B;
	std::cout << B;
	std::cout << "\nSuma lor: \n";
    A+B;
}