#include "pile_entier.h"

pile_entier::pile_entier(int taille =20)
{
	pile = new int(taille);
	this->taille = taille;
	this->hauteur = 0;
}

pile_entier::~pile_entier()
{
	delete pile;
}

// 
void pile_entier::empile(int a)
{
	if 
		(pleine() != 1)
	{
		pile[hauteur] = a;
		hauteur++;
	}
}

int pile_entier::depile()
{
	if
		(vide() != 1)
	{
		int result = pile[--hauteur];
		return result;
	}

	return 0;
}

int pile_entier::pleine()
{	
	return hauteur == taille;
}

int pile_entier::vide()
{
	return hauteur == 0;
}
