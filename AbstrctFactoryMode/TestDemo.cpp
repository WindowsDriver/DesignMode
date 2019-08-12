#include <iostream>
#include "Student.h"

int main()
{
	User* _pUser = new User();
	FactoryClass* _pFactory = new SQLFactoryClass();
	IUser* iu = _pFactory->createUser();
	iu->insert(*_pUser);
	iu->getUser(23);

	return 0;
}