#pragma once
#include "Cylinder.h"
#include "Parallelepiped.h"
#include "Piramid.h"
#include "Cone.h"
class Shapes 
{
	int size;
	vector<volumeShape*> mem;
	void checkInd(int i) const {
		if (i < 0 || i >= size) {
			cout << "Error: Invalid index " << i << endl;
			exit(-1);
		}
	}
public:
	Shapes() : size(0) {}
	Shapes(vector<volumeShape*>);
	Shapes(const Shapes& S);
	~Shapes();

	bool isEmpty() const;
	void add(int, volumeShape*);
	void pop(int);
	void deleteAll();
	void sortByArea();

	volumeShape* copy(volumeShape*) const;
	Shapes& operator=(const Shapes&);
	volumeShape*& operator[](int);
	const volumeShape* operator[](int) const;

	friend istream& operator>>(istream&, Shapes&);
	friend ostream& operator<<(ostream&, const Shapes&);
};


