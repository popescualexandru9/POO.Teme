#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>

class nod
{
	friend class BST;
	int value;
	nod *left;
	nod *right;

	nod(int item)
	{
		left = right = NULL;
		value = item;
	}
};

class BST
{
private:

	nod* root;
	void insert(nod*,int);
	int getHeight(nod*);
	void ParcFrunza(nod*);
	void stergArbore(nod*);
	void sterg(nod*, int);


public:

	BST();
	~BST();

	nod* minArb(nod*);
	void search(nod*& temp, int data, nod*& parent);
	void sterg(int data) { sterg(root, data); }
	void insert(int data) { insert(root, data); }
	int getHeight() { return getHeight(root); }
	void stergArbore() { stergArbore(root); }
	void ParcFrunza() { ParcFrunza(root); }

	void operator+(int data) { this->insert(data); }

    std::ostream& InOrder(std::ostream& out, nod *root)
	{
		if (root != NULL)
		{
			InOrder(out, root->left);
			out << root->value << " ";
			InOrder(out, root->right);
		}
		return out;
	}

	friend std::ostream& operator<< (std::ostream& out,  BST& obj)
	{
		 return obj.InOrder(out,obj.root);
	}

	friend std::istream& operator>> (std::istream& in, BST& obj)
	{
	    int n,x;
        std::cout << "Cate elemente doresti sa introduci ? \nRaspuns : ";
        in >> n;
        std::cout << std::endl;

        for (int i = 0; i < n; i++)
        {
            std::cout << "Elementul : ";
            in >> x;
            obj+x;
        }
		return in;
	}
};

BST::BST()
{
	root = NULL;
}

BST ::~BST()
{
	stergArbore(root);
}

int max(int a, int b)
{
	return (a > b) ? a : b;
}

void BST::insert(nod* rad, int data)
{
	if (!root)
	{
		rad = new nod(data);
		root = rad;

	}
	else
	{
		if (data < rad->value)
		{
			if (!rad->left)
			{
				nod *temp = new nod(data);
				rad->left = temp;
			}
			else
				insert(rad->left, data);
		}
		else
		{
			if (!rad->right)
			{
				nod *temp = new nod(data);
				rad->right = temp;
			}
			else
				insert(rad->right, data);
		}
	}
}

int BST::getHeight(nod* rad)
{
	if (!rad)
		return 0;
	return 1 + max(getHeight(rad->left), getHeight(rad->right));
}

void BST::stergArbore(nod* rad)
{
	if (!rad)
		return;
	nod *temp = rad;
	nod *stTemp = rad->left;
	nod *drTemp = rad->right;
	delete(temp);
	stergArbore(stTemp);
	stergArbore(drTemp);
}

void BST::ParcFrunza(nod *rad)
{
	if (rad == NULL)
		return;
	else
	{
		ParcFrunza(rad->left);
		if (rad->right == NULL && rad->left == NULL)
			std::cout << rad->value << " ";
		ParcFrunza(rad->right);
	}
}

nod* BST::minArb(nod* temp)
{
	while (temp->left != NULL)\
	{
		temp = temp->left;
	}
	return temp;
}

void BST::search(nod* &temp, int data, nod* &parent)
{
	while (temp != NULL && temp->value != data)
	{
		parent = temp;
		if (data < temp->value)
			temp = temp->left;
		else
			temp = temp->right;
	}

}

void BST::sterg(nod* root, int data)
{

	nod* parent =	NULL;
	nod* temp = root;
	search(temp, data, parent);

	if (temp == NULL )
	{
		std::cout << "no se puede chica\n";
		return;
	}
	if (temp->left == NULL && temp->right == NULL)
		{

		if (temp != root)
		{
			if (parent->left == temp)
				parent->left = NULL;
			else
				parent->right = NULL;
		}
		else
			root = NULL;
		delete(temp);
	}
	else if (temp->left && temp->right)
	{
		nod* successor = minArb(temp->right);
		int val = successor->value;

		sterg(root, successor->value);
		temp->value = val;
	}
	else
	{
		nod* child = (temp->left) ? temp->left : temp->right;

		if (temp != root)
		{
			if (temp == parent->left)
				parent->left = child;
			else
				parent->right = child;
			}
		else
			root = child;

		delete(temp);
	}
}

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
