#include "Acheter.h"
#include "Article.h"

void NS_Acheter::Acheter::setIdArticle()
{
	this->Id_Article;
}

void NS_Acheter::Acheter::setIdCommande()
{
	this->Id_Commande;
}

void NS_Acheter::Acheter::setQuantiteArticle()
{
	this->Quantite_Article;
}

void NS_Acheter::Acheter::setPrixFinal()
{
	this->Prix_Final;
}

int^ NS_Acheter::Acheter::getIdArticle()
{
	return this->Id_Article;
}

int NS_Acheter::Acheter::getIdCommande()
{
	return this-> Id_Commande;
}

int NS_Acheter::Acheter::getQuantiteArticle()
{
	return this->Quantite_Article;
}

int NS_Acheter::Acheter::getPrixFinal(float prixInitial, int quantiteArticle)
{
	return this->Prix_Final = prixInitial * quantiteArticle;
}

String^ NS_Acheter::Acheter::CreateAcheter()
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

String^ NS_Acheter::Acheter::UpdateAcheter()
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

String^ NS_Acheter::Acheter::DeleteAcheter()
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}
