#include "pch.h"
#include <iostream>
#include "AngajatHeader.h"
#include "AdministratorHeader.h"


int main()
{
	char *name = new char[20];
	std::cout << "Numele : ";
	std::cin >> name;

	Angajat A(name, 200.0);
	A.display(); 
	std::cout<<std::endl;
	A.setSalariu(250.0);
	std::cout <<" Dupa o mariere ,acesta va avea salariul "<< A.getSalariu();
	
	std::cout << "\n";
	Angajat D(A);
	D.display();
	std::cout << "\n\n";

	std::cout << "Numele : ";
	std::cin >> name;

	Administrator B(name, 2, 300);
	B.display();
	std::cout << " si este administrator la sectia " << B.getSection();
	std::cout<<std::endl;


	Administrator C(B);
	C.display();
	std::cout << " si este administrator la sectia " << C.getSection();

	delete[] name;
	std::cout << "\n\n";
}
