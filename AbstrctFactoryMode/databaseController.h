#pragma once
#include "Databasemode.h"

enum DATABASE_MODE
{
	SQL_MODEL = 1,
	ACCESS_MODEL
};
class DatabaseController
{
	FactoryClass* m_pFacrory;
	IUser * m_pIuser;

public:
	IUser* createUser(int mode)
	{
		switch (mode)
		{
		case DATABASE_MODE::ACCESS_MODEL:
			this->m_pFacrory = new AccessFactoryClass();
		case DATABASE_MODE::SQL_MODEL:
			m_pFacrory = new SQLFactoryClass();
		default:
			break;
		}

		m_pIuser = m_pFacrory->createUser();
		return m_pIuser;
	}
	
	
};
