#include "Heure.h"
#include "DateHeure.h"
using namespace std;
Heure::Heure(int h, int m, int s):heure(0),minute(0),seconde(0)
{
	if (h <= 23 && h>=0 && m<60 &&m>=0 && s<60&&s>=0) {
		this->heure = h;
		this->minute = m;
		this->seconde = s;
	}
	else {
		cout << "Chiffre heure incorrect" << endl;
	}
}



void Heure::afficher() const
{
	cout << "*******Heure********:" << endl;
	cout << this->heure << ":" << this->minute << ":" << this->seconde << endl;
}

bool Heure::operator>(const Heure& H)
{
	if (H.heure < this->heure) return true;
	if (H.heure == this->heure) {
		if (H.minute < this->minute) return true;
		if (H.minute == this->minute) {
			if (H.seconde < this->seconde) return true;
		}
	}
	return false;
}
