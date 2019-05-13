#pragma once
#include "Pizza.h"
#include <iostream>
class Pomodoro : public Pizza
{
public:
	Pomodoro();
	friend std::istream& operator >>(std::istream &in, Pomodoro &);
	Pomodoro operator = (const Pomodoro&);
	void display();
	void preparare(int);
};

