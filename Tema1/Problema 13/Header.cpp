#include "pch.h"
#include <iostream>
#include "Header.h"

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

	nod* parent = NULL;
	nod* temp = root;
	search(temp, data, parent);

	if (temp == NULL)
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
