#pragma once
#include <iostream>
using namespace std;

class Objet_postal
{
protected:
	string origine, destination ; 
	int code_postal, taux_de_recommandation;
	float poids, volume;

public:
	Objet_postal(){}
	Objet_postal(string o, string d, int c, int t, float p, float v)
	{
		origine = o;
		destination = d;
		code_postal = c;
		taux_de_recommandation = t;
		poids = p;
		volume = v;
	}
	virtual ~Objet_postal(){}

	virtual float getVolume()=0 {}

	virtual float tarif_daffranchissement()=0 {}
	virtual float tarif_de_remboursement()=0 {}
	virtual void affichage() 
	{
		cout << code_postal << "/" << destination << "/" << taux_de_recommandation;
	}
};

