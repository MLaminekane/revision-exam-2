#include <iostream>

using namespace std;

void minMax(int tab[], int taille, int min, int max) {
	min = max = tab[0];
	for (int i = 0; i < taille; i++)
	{
		if (tab[i] < min)
		{
			min = tab[i];
		}
		if (tab[i] > max)
		{
			max = tab[i];
		}
	}
}
struct Etudiant {
	string nom;
	string prenom;
	string programme;
	double moyenne=0;
};
struct Etudiant2 {
	string codePermanant;
	double moyenne = 0;
};
void validateM(Etudiant2 etudiants[], string nom) {
	const int taille = 3;
	cout << "Les etudiants qui ont la moyenne: " << endl;
	for (int i = 0; i < taille; i++)
	{
		while (etudiants[i].moyenne >= 60)
		{
			cout << "Nom: " << etudiants[i].codePermanant << endl;
			i++;
		}
	}
}
void Recursive(int n) {
	if (n == 0) {
		cout << "0" << endl;
	}
	else {
		cout << n * n << endl;
		Recursive(n - 1);	
	}
}
void Iterative(int n) {
	for (int i = n; i >= 0; i--)
	{
		cout << i * i << endl;
	}
	Iterative(n - 1);

}

int main() {
	int choix;
	cout << "1. Fonction 1" << endl;
	cout << "2. Fonction 2" << endl;
	cout << "3. Fonction 3" << endl;
	cout << "4. Fonction 4" << endl;
	cout << "Entrez votre choix: ";
	cin >> choix;
	switch (choix)
	{
	case 1:{
		cout << "exo 2" << endl;
		const int taille = 20;
		cout << "Entrez 20 nombres entiers" << endl;
		int tab[taille];
		for (int i = 0; i < taille; i++)
		{
			cin >> tab[i];
		}
		int min = tab[0];
		int max = tab[0];
		minMax(tab, taille, min, max);
		break;
	}
		case 2: {
			cout << "Fonction 2" << endl;
			const int tailleEtds = 50;
			Etudiant listEtudiants[tailleEtds];
			for (int i = 0; i < tailleEtds; i++)
			{
				cout << "Enter le nom de l'etudiant " << i + 1 << " : ";
				cin >> listEtudiants[i].nom;
				cout << "Enter le prenom de l'etudiant: ";
				cin >> listEtudiants[i].prenom;
				cout << "Enter le programme de l'etudiant: ";
				cin >> listEtudiants[i].programme;
				cout << "Enter la moyenne de l'etudiant: ";
				cin >> listEtudiants[i].moyenne;
			}
			for (int i = 0; i < tailleEtds; i++)
			{
				cout << "Nom: " << listEtudiants[i].nom << endl;;
				cout << "Prenom: " << listEtudiants[i].prenom << endl;
				cout << "Programme: " << listEtudiants[i].programme << endl;
				cout << "Moyenne: " << listEtudiants[i].moyenne << endl;
			}
			break;
		}
		case 3: {
			int nb;
			cout << "Entrez un nombre: ";
			cin >> nb;
			Iterative(nb);
			break;
		}
		case 4: {
			cout << "Exercie bonus: " << endl;
			const int taille = 3;
			Etudiant2 etudiants[taille];
			for (int i = 0; i < taille; i++)
			{
				cout << "Entrez le code permanant de l'etudiant " << i + 1 << " : ";
				cin >> etudiants[i].codePermanant;
				cout << "Entrez la moyenne de l'etudiant: ";
				cin >> etudiants[i].moyenne;
			}
			validateM(etudiants, "nom");
		}
	}
	return 0;
} 