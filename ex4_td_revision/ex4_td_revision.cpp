
#include <iostream>
#include "Pokemon.h"
#include "Terractifs.h"
#include "Dormeurs.h"
#include "PokemonWorld.h"
using namespace std;

int main()
{
	PokemonWorld pw;
	Pokemon* t = new Terractifs("moez", 12.5, 10, 2, 0.5);
	Pokemon* d = new Dormeurs("imed", 12.5, 10, 2,45);
	t->afficher();
	d->afficher();	
	pw.ajouter(t);
	pw.ajouter(d);
	cout << pw.calculer_energie_absorb() << endl;
}

