#pragma once
#include "BDD.h"
#include "Personnel.h"
#include "Adresse.h"
#include "ServiceAdresse.h"

using namespace System::Data;
using namespace  System::Collections::Generic;

public ref class ServicePersonnel {
private:
	BDD^ bdd;
	ServiceAdresse serviceAdresse;
public:
	ServicePersonnel();
	~ServicePersonnel();
	List<Personnel^>^ ServicePersonnel::SelectAllPersonnel();
	void InsertPersonnel(Personnel^ personnel);
	void DeletePersonnel(Personnel^ personnel);
	void UpdatePersonnel(Personnel^ personnel);
};
