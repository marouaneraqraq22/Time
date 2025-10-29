#include "DateHeure.h"
using namespace std;
DateHeure::DateHeure(int s, int m, int h, int j, int mo, int a) :Heure(h, m, s),annee(0),mois(0),jour(0)
{
	if (a > 0) {
		this->annee = a;
		if (mo <= 12 && mo > 0) {
			this->mois=mo;
			switch (mo)
			{
			case 1:
				if (j <= 31 && j > 0) this->jour = j;
				break;
			case 2:
				if (a % 4 == 0) {
					if (j <= 29 && j > 0) this->jour = j;
					}
				else {
					if (j <= 28 && j > 0) this->jour = j;
				}

				
				
				if (j <= 30 && j > 0) this->jour = j;
				break;
			case 3:if (j <= 31 && j > 0) this->jour = j;
				break;
			case 4:if (j <= 30 && j > 0) this->jour = j;
				break;
			case 5:if (j <= 31 && j > 0) this->jour = j;
				break;
			case 6:if (j <= 30 && j > 0) this->jour = j;
				break;
			case 7:if (j <= 31 && j > 0) this->jour = j;
				break;
			case 8:if (j <= 30 && j > 0) this->jour = j;
				break;
			case 9:if (j <= 31 && j > 0) this->jour = j;
				break;
			case 10:if (j <= 30 && j > 0) this->jour = j;
				break;
			case 11:if (j <= 31 && j > 0) this->jour = j;
				break;
			case 12:if (j <= 30 && j > 0) this->jour = j;
				break;
			
				
				
			}
		}
		
	}
	
}

void DateHeure::afficher() const
{
	Heure::afficher();
	cout << "*****Date*****" << endl;
	if (this->annee == 0 || this->jour == 0 || this->mois == 0) {
		cout << "Date errone" << endl;
	}else
	cout << this->jour << "/" << this->mois << "/" << this->annee << endl;
}

bool DateHeure::operator>(const DateHeure& d)
{
	if (d.annee < this->annee) return true;
	if (d.annee == this->annee) {
		if (d.mois < this->mois)return true;
		if (d.mois == this->mois) {
			if (d.jour < this->jour) return true;

		}
	}
	return false;
}
