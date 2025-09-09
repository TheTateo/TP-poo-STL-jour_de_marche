// tp-STL_jour_de_marche.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int nbEmplacements = 5;
	vector<pair<string, int> > marchands;

	// Entrer les prenoms
	for (int i = 0; i < nbEmplacements; ++i) {
		string nom;
		cin >> nom;
		marchands.emplace_back(nom, i + 1);
	}

	// Tri par ordre alphabetique
	sort(marchands.begin(), marchands.end(),
		[](const auto& a, const auto& b) {
			return a.first < b.first;
		});

	// Affichage
	for (const auto& marchand : marchands) {
		cout << marchand.first << " " << marchand.second << endl;
	}

	return 0;
}

/*
	cin >> nbEmplacements;
*/