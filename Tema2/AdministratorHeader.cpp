#include "pch.h"
#include <iostream>
#include "AdministratorHeader.h"


Administrator::Administrator(const char *n,int sec ,float sal):Angajat(n,sal)
{
    this->sectie=sec;
}

Administrator::Administrator(const Administrator &r):Angajat(r)
{

    this->sectie=r.sectie;
}
