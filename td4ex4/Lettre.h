#pragma once
#include "Objet_postal.h"
class Lettre :
    public Objet_postal
{
private: 
    string caractere_durgence;

public:
    Lettre(){}
    Lettre(string o, string d, int c, int t, float p, float v,string u) : Objet_postal(o, d, c, t, p, v),caractere_durgence (u){ }
    ~Lettre(){}


    void affichage()
    {
        cout << "Lettre ";
        Objet_postal::affichage();
        cout << "/" << caractere_durgence << endl;
    }

    float tarif_daffranchissement()
    {
        float x, y = 0;
        if (taux_de_recommandation == 1)
            x = 0.5;
        else if (taux_de_recommandation == 2)
            x = 1.5;
        if (caractere_durgence == "urgent")
            y = 0.3;
        return(0.5 + x + y);
    }

    float  tarif_de_remboursement()
    {
        switch (taux_de_recommandation)
        {
            case '0': return 0;
            case '1':return 1.5;
            case '2':return 15;
        }
    }
  
};

