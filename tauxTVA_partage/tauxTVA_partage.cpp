#include <iostream>
using namespace std;

class Produit
{
    string nom;
    float prixHT;
    static float tauxTVA;

public:
    Produit(string n, float p)
    {
        nom = n;
        prixHT = p;
    }

    float getPrixTTC()
    {
        return prixHT * (1 + tauxTVA / 100);
    }

    static void modifierTVA(float nouveauTaux)
    {
        tauxTVA = nouveauTaux;
    }

    void afficher()
    {
        cout << "Produit : " << nom
             << " | Prix HT : " << prixHT
             << " | Prix TTC : " << getPrixTTC() << " DH" << endl;
    }

    ~Produit()
    {
        cout << "fin" << endl;
    }
};

float Produit::tauxTVA = 20.0;

int main()
{
    Produit p1("banana", 15);
    Produit p2("chargeur", 120);
    Produit p3("bescuit", 2);
    Produit p4("jus", 5);
    Produit p5("pomme de terre", 7);

    p1.afficher();
    p2.afficher();
    p3.afficher();
    p4.afficher();
    p5.afficher();

    cout << endl;

    Produit::modifierTVA(25.0);

    p1.afficher();
    p2.afficher();
    p3.afficher();
    p4.afficher();
    p5.afficher();

    return 0;
}
