#include <iostream>
#include "Databasemode.h"
#include "databaseController.h"

int main()
{
	/*
	User* _pUser = new User();
	DatabaseController* databaseController = new DatabaseController();
	IUser* iu = databaseController->createUser(DATABASE_MODE::SQL_MODEL);
	iu->insert(*_pUser);
	iu->getUser(23);
	delete iu;
	delete databaseController;
	delete _pUser;
	*/

	User* _pUser = new User();
	FactoryClass* _pFactory = new SQLFactoryClass();
	IUser* iu = _pFactory->createUser();
	iu->insert(*_pUser);
	iu->getUser(23);
	delete iu;
	delete _pFactory;
	delete _pUser;

	return 0;
}