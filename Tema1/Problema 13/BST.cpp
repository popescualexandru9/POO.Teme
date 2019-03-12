#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "Header.h"


int main()
{
	BST arb;
	nod* root = NULL;
	std::cin>>arb;
	int x;

	std::cout << "\n";
	std::cout << "Inaltimea arborelui este : " << arb.getHeight() << std::endl;

	std::cout << "Parcurgerea inordine (SRD) este : ";
	std::cout << arb;
	std::cout << "\n";

	std::cout << "Lista frunzelor este : ";
	arb.ParcFrunza(); std::cout << "\n\n";

	std::cout << "Elementul pe care vrei sa-l stergi : ";
	std::cin >> x;

	arb.sterg(x);
	std::cout << "Parcurgerea inordine (SRD) dupa stergere este : ";
	std::cout << arb; std::cout << std::endl;
	return 0;
}
