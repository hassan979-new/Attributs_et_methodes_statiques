
# 🧮 **Attributs et méthodes statiques**

## 📘 Description

Ce document regroupe plusieurs projets C++ illustrant des concepts fondamentaux de la programmation orientée objet :

- Utilisation des attributs et méthodes statiques

- Suivi du nombre d’objets instanciés

- Encapsulation des données

- Calculs dynamiques (TVA, prix TTC)

- Association entre objets et affichage structuré
## 📂 Project Structure
````
projets
├── Boite/
│   └── boite.cpp
├── Produit/
│   └── produit.cpp
├── Utilisateur/
│   └── utilisateur.cpp
└── README.md
````


## ⚙️ Features

### **1.** Boîte – Suivi du nombre d’objets
Classe Boite avec :

- Attributs privés : longeur, largeur, heuteur

- Attribut statique nbBoite pour compter les instances

- Constructeur paramétré qui incrémente le compteur

- Méthode statique getNombreBoites() pour afficher le total

### **2.** Produit – Calcul du prix TTC avec TVA statique
Classe Produit avec :

- Attributs privés : nom, prixHT

- Attribut statique tauxTVA initialisé à 20%

Méthodes :

- getPrixTTC() → calcule le prix TTC

- modifierTVA() → modifie le taux global

- afficher() → affiche les informations du produit
### **3.** Utilisateur – Suivi dynamique des connexions
Classe Utilisateur avec :

- Attributs privés : nom, role

- Attribut statique nbUtilisateursConnectes pour suivre les connexions

- Constructeur qui incrémente le compteur

- Méthode statique getNbUtilisateursConnectes() pour consulter le total

- Destructeur qui décrémente le compteur et affiche le nombre restant
## 🖥️ Example Execution

### Compteur d’objets : 
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/dfd2c004-d03a-421a-95d4-90f9f880d583" />
### Taux de TVA partagé :
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/21fddbbf-f6fb-4167-9c3e-16a9d65f391a" />
### Gestion des sessions utilisateurs :
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/dceaaff5-6f72-4897-ab85-927208bb6313" />
## 💡 Concepts Practiced

- L’usage des attributs statiques pour le comptage global ou le paramétrage partagé

- La structuration claire des classes avec encapsulation

- Le suivi du cycle de vie des objets

- L’interaction entre objets et affichage dynamique
## 🧑‍💻 Author

- 👤 Agouram Hassan
- 🏫 Fondamentaux et Concepts Avancés de la Programmation Java – TP1
- 🎓 Instructor	Mr.LACHGAR
- 📅 25	October 2025
