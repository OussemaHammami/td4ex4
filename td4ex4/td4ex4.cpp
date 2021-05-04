#include "Objet_postal.h"
#include"Lettre.h"
#include"Colis.h"
#include "Sac_postal.h"
#include <iostream>
using namespace std;


int main()
{
	Sac_postal psac(4);
	Lettre* pl1, * pl2;
	Colis* pc1, * pc2;

    pl1 = new Lettre("Tunis", "famille Kirik, igloo 5 banquise nord", 7742, 1, 12.5, 0.02, "ordinaire");
    pl2 = new Lettre("Tunis", "famille Kirik, igloo 5 banquise nord", 7743, 1, 12.5, 0.02, "urgent");
    pc1 = new Colis("Tunis",  "famille Kaya, igloo 10, terres ouest",7854 , 2,15, 0.03 ,"telephone", 200);
    pc2 = new Colis("Tunis", "famille Kaya, igloo 10, terres ouest", 7855, 2, 15, 0.02, "lunette", 200);

    psac.ajouterObjet(pl1);
    psac.ajouterObjet(pl2);
    psac.ajouterObjet(pc1);
    psac.ajouterObjet(pc2);

    psac.afficher();

	return 0;
}

