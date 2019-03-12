#include "pch.h"
#include <iostream>
#include <string.h>
#include "AngajatHeader.h"

Angajat::~Angajat()
{
  delete [] nume;
}

Angajat::Angajat()
{
	nume = new char[5];
    strcpy_s(nume,5,"Nume");
    salariu=0.0;
}

Angajat::Angajat(char *n,float sal)
{
	int lenght = strlen(n);
	nume = new char[lenght+1];
	strcpy_s(nume,lenght+1, n);
    salariu=sal;
}

Angajat::Angajat(const Angajat &r)
{
	int lenght = strlen(r.nume);
	nume = new char[lenght + 1];
	strcpy_s(nume,lenght+1 ,r.nume);
    this->salariu=r.salariu;
}

void Angajat::display()
{
     std::cout<<" Angajatul cu numele ";
     std::cout<<this->nume<<" are salariul ";
     std::cout<<this->salariu;
}

