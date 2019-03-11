#include "pch.h"
#include <iostream>
#include "AngajatHeader.h"
#include "AdministratorHeader.h"


int main()
{
	Angajat Andrei("Andrei", 200.0);
	Andrei.display(); 
	std::cout<<std::endl;
	Andrei.setSalariu(250.0);
	std::cout <<"Dupa o mariere ,acesta va avea salariul "<< Andrei.getSalariu();

	std::cout << "\n\n";
	Administrator Alex("Alex", 2, 300);
	Alex.display();
	std::cout << " si este administrator la sectia " << Alex.getSection();
	std::cout<<std::endl;


	Administrator AlexCopie(Alex);
	AlexCopie.display();
	std::cout << " si este administrator la sectia " << AlexCopie.getSection();


	std::cout << "\n\n";
}
