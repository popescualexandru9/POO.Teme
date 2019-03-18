#ifndef HEADER
#define HEADER

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
	void insert(nod*, int);
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

	friend std::ostream& operator<< (std::ostream& out, BST& obj)
	{
		return obj.InOrder(out, obj.root);
	}

	friend std::istream& operator>> (std::istream& in, BST& obj)
	{
		int n, x;
		std::cout << "Cate elemente doresti sa introduci ? \nRaspuns : ";
		in >> n;
		std::cout << std::endl;

		for (int i = 0; i < n; i++)
		{
			std::cout << "Elementul : ";
			in >> x;
			obj + x;
		}
		return in;
	}
};

#endif
