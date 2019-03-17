#ifndef MATRICE_H
#define MATRICE_H
#pragma once
#include "Vector.h"

class matrice
{
	int **p;
	int m, n;
public:
	array vec;
	matrice();
	~matrice();
	void adaug();
	void afis();

	friend std::istream& operator>> (std::istream& in, matrice& obj)
	{
		obj.adaug();
		return in;
	}

	friend std::ostream& operator <<(std::ostream& out, matrice& obj)
	{
		out << "\nMatrice : \n";
		obj.afis();
		out << " \n";
		return out;
	}

	void operator +(const matrice& obj)
	{
		int **sum;
		sum = (int**)malloc(m * sizeof(int*));
		for (int i = 0; i < m; i++)
			sum[i] = (int*)malloc(n * sizeof(int));

		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
			{
				sum[i][j] = this->p[i][j] + obj.p[i][j];
			}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				std::cout << sum[i][j] << " ";
			std::cout << "\n";
		}
	}
};

matrice::matrice()
{
	n = vec.getSize();
	std::cout << "Numarul liniilor : ";
	std::cin >> m;
	p = new int *[m];
	for (int i = 0; i < m; i++)
		p[i] = new int[n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			p[i][j] = 0;
}

matrice::~matrice()
{
	for (int i = 0; i < m; i++)
		delete(p[i]);
	delete p;
}

void matrice::afis()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			std::cout << p[i][j] << " ";
		std::cout << "\n";
	}
}

void matrice::adaug()
{
	for (int i = 0; i < m; i++)
	{
		std::cin >> vec;
		for (int j = 0; j < n; j++)
			p[i][j] = vec.a[j];
	}
}
#endif
