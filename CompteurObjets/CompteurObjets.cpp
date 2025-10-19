#include <iostream>
using namespace std;

class Boite{
    int longeur;
    int largeur;
    int heuteur;
    static int nbBoite;

    public :
        Boite(int a,int b,int h){
            longeur = a;
            largeur = b;
            heuteur = h;
            nbBoite++;
        }

        static void getNombreBoites(){
            cout<<"nombre de boites est "<<nbBoite<<endl;
        }

    ~Boite(){
        nbBoite--;
        cout<<"fin"<<endl;
    }
    
};

int Boite::nbBoite = 0;

int main()
{
    Boite b1(12,1,3);
    Boite b2(53,43,55);
    Boite b3(9,3,7);
    Boite b4(6,5,34);
    Boite b5(100,77,44);

    Boite::getNombreBoites();


    return 0;
}
