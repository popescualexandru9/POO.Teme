#ifndef ADMINISTRATORHEADER_H_INCLUDED
#define ADMINISTRATORHEADER_H_INCLUDED
#include "AngajatHeader.h"

class Administrator : public Angajat
{
    int sectie;

public :

	virtual ~Administrator() {}
    Administrator (const char *n,int sec,float sal);
    Administrator  (const Administrator  &r);
	int getSection() { return this->sectie; }

};


#endif // ADMINISTRATORHEADER_H_INCLUDED
