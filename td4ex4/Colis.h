#pragma once
#include "Objet_postal.h"
class Colis :
    public Objet_postal
{
private:
    string declaration_de_contenu;
    float valeur_declaree;

public:
    Colis(){}
    Colis(string o, string d, int c, int t, float p, float v, string dc,float vd):Objet_postal(o, d, c, t, p, v)
    {
        declaration_de_contenu = dc;
        valeur_declaree = vd;
    }
    ~Colis() {}

    void affichage()
    {
        cout << "Colis ";
        Objet_postal::affichage();
        cout << "/" << volume << "/" << valeur_declaree << endl;
    }


    float tarif_daffranchissement()
    {
        float x, y = 0;
        if (taux_de_recommandation == 1)
            x = 0.5;
        else if (taux_de_recommandation == 2)
            x = 1.5;
        if (volume > 1/8)
            y = 3;
        return(2 + x + y);
    }

    float  tarif_de_remboursement()
    {
        switch (taux_de_recommandation)
        {
        case '0': return 0;
        case '1':return (valeur_declaree / 10);
        case '2':return (valeur_declaree / 2);
        }
    }
};

