#pragma once
#include "Vecteur.h"
#include "Objet_postal.h"

class Sac_postal
{
	Vecteur<Objet_postal*> conteneur;
	float capacite;

public:
	Sac_postal(float c , int n):capacite(c),conteneur(n) { }
	Sac_postal(int n) :conteneur(n) { capacite = 0.5; }
	~Sac_postal()
	{
		for (int i = 0; i < conteneur.taille(); i++)
			delete conteneur[i];
	}

	float volume()
	{
		float s = 0;
		for (int i = 0; i < conteneur.taille(); i++)
			s += (conteneur[i])->getVolume();
		return s;
	}

	void ajouterObjet(Objet_postal* o) 
	{ 
		if (o->getVolume() + volume() <= capacite)
			conteneur.ajouter(o);
		else
			cout << "full conainer!" << endl;
	}
	
	void supprimerObjet(Objet_postal* o) { conteneur.supprimer(o); }

	int findObj(Objet_postal* o) { conteneur.find(o); }

	void afficher()
	{
		for (int i = 0; i < conteneur.taille(); i++)
			(conteneur[i])->affichage();
	}

};

