#include "pch.h"
#include <iostream>
#include "AngajatHeader.h"

Angajat::~Angajat()
{
  //delete nume;
}

Angajat::Angajat()
{
    nume="nume";
    this->salariu=0.0;
}

Angajat::Angajat(const char *n,float sal)
{
     this->nume=n;
     this->salariu=sal;
}

Angajat::Angajat(const Angajat &r)
{
    this->nume=r.nume;
    this->salariu=r.salariu;
}

void Angajat::display()
{
     std::cout<<"Angajatul cu numele ";
     std::cout<<this->nume<<" are salariul ";
     std::cout<<this->salariu;
}

