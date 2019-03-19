#ifndef VECTOR_H
#define VECTOR_H

class array
{
	int *a = NULL;
	int size = 0;
	bool state = false;
	friend class matrice;

public:
	array();
	array(const array& obj);
	~array();
	int suma();
	void maxim();
	void sortare();
	void adaug();
	void afis();
	int getSize() { return size; }
	int operator *(array v);

	friend std::istream& operator>> (std::istream& in, array& obj)
	{
		obj.adaug();
		return in;
	}

	friend std::ostream& operator<<(std::ostream& out, array&obj)
	{
		out << "\nArray A: ";
		obj.afis();
		out << " \n";
		return out;
	}

};

array::array()
{
	std::cout << "Marime array: ";
	std::cin >> size;
	a = new int[size];
	for (int i = 0; i < size; i++)
		a[i] = 0;
}

array::array(const array& obj)
{
	state = true;
	size = obj.size;
	a = obj.a;

}

array::~array()
{
	if (state == true)
		delete a;
}

void array::afis()
{
	for (int i = 0; i < size; i++)
		std::cout << a[i] << " ";
}

void array::adaug()
{
	int data;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Element : ";
		std::cin >> data;
		a[i] = data;
	}
}

int array::suma()
{
	int s = 0;
	for (int i = 0; i < size; i++)
		s += a[i];
	return s;
}

void array::maxim()
{
	int maxi = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > maxi)
			maxi = a[i];
	}
	for (int i = 0; i < size; i++)
		if (a[i] == maxi)
			std::cout << a[i] << "[" << i << "]";
}

void swap(int a, int b)
{
	int aux;
	aux = a;
	a = b;
	b = aux;
}

int cmp(const void* a, const void* b)
{
	int aa = *(int*)a;
	int bb = *(int*)b;
	return (aa > bb) ? 1 : -1;
}

void array::sortare()
{
	qsort(a, size, sizeof(int), cmp);
}

int array::operator*(array v)
{
	int p = 0;
	for (int i = 0; i < size; i++)
		p += (this->a[i]) *(v.a[i]);
	return p;
}

#endif
