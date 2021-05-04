#pragma once
#include <iostream>
using namespace std;

template<class T>
class Vecteur
{
	T *v;
	int sommet=0;

public:

	Vecteur(int s) { v = new T[s];}
	~Vecteur(){ delete[] v; }

	int estVide() { return (sommet == 0); }

	int find(T x) 
	{
		if  (!estVide())
		{
			for (int i = 0; i < sommet; i++)
						if (v[i] == x)
							return 1;
					return 0;
		}
	}	
		
	void ajouter(T x) 
	{
		v[sommet] = x;
		sommet++;
	}

	void supprimer(T x)
	{
		if  (!estVide())
		{
			int i = 0;
			while (v[i] != x)
			{
				i++;
			}
			if (i <= sommet)
			{
				for (int j = i; j <= sommet; j++)
					v[j] = v[j + 1];
				sommet--;

			}
			else
				cout << x << " doesnt exist" << endl;
		}
	}

	int taille() { return sommet + 1; }

	T& operator[](int i) { return v[i]; }
	
};

