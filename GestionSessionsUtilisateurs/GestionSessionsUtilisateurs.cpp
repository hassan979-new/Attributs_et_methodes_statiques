#include <iostream>
using namespace std;

class Utilisateur
{
    string nom;
    string role;
    static int nbUtilisateursConnectes;

public:
    Utilisateur(string n, string r)
    {
        nom = n;
        role = r;
        nbUtilisateursConnectes++;
    }

    static int getNbUtilisateursConnectes()
    {
        return nbUtilisateursConnectes;
    }

    ~Utilisateur()
    {
        nbUtilisateursConnectes--;
        cout << "le nombre d'utilisateur rester" << getNbUtilisateursConnectes() << endl;
    }
};

int Utilisateur::nbUtilisateursConnectes = 0;

int main()
{
    Utilisateur u1("Hassan", "visiteur");
    cout << "le nombre d'utilisateur actuel: " << Utilisateur::getNbUtilisateursConnectes() << endl;
    Utilisateur u2("Taha", "visiteur");
    cout << "le nombre d'utilisateur actuel: " << Utilisateur::getNbUtilisateursConnectes() << endl;
    Utilisateur u3("Oussama", "visiteur");
    cout << "le nombre d'utilisateur actuel: " << Utilisateur::getNbUtilisateursConnectes() << endl;
    Utilisateur u4("Wissam", "visiteur");
    cout << "le nombre d'utilisateur actuel: " << Utilisateur::getNbUtilisateursConnectes() << endl;
    Utilisateur u5("Hamza", "visiteur");
    cout << "le nombre d'utilisateur actuel: " << Utilisateur::getNbUtilisateursConnectes() << endl;

    return 0;
}
