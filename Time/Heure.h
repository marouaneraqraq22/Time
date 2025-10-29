#pragma once
#include<iostream>
class Heure
{
protected:
	int heure;
	int minute;
	int seconde;
public:
	Heure(int, int, int);
	void afficher()const;
	bool operator >(const Heure&);
};

