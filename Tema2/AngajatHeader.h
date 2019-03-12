#ifndef ANGAJATHEADER_H_INCLUDED
#define ANGAJATHEADER_H_INCLUDED

class Angajat
{
    char *nume;
    float salariu;

public:

    virtual ~Angajat();
    Angajat();
    Angajat( char *n,float sal);
    Angajat(const Angajat &r);
    void display();
    float getSalariu() {return this->salariu;}
    void setSalariu(float s) {this->salariu = s; }
};


#endif // ANGAJATHEADER_H_INCLUDED
