#pragma once
#include "SuperCash.h"

enum OperatorMode
{
	ADD_OPERATOR = 0,
	SUB_OPERATOR = 1,
	MUL_OPERATOR = 2,
	DIV_OPERATOR = 3

};

class OperatorAdd : public SuperCash
{
public:
	int GetCashResult()
	{
		return (this->GetNumberA() + this->GetNumberB());
	}
};

class OperatorSub : public SuperCash
{
public:
	int GetCashResult()
	{
		return (this->GetNumberA() - this->GetNumberB());
	}
};

class OperatorMul : public SuperCash
{
public:

	int GetCashResult()
	{
		return (this->GetNumberA() * this->GetNumberB());
	}
};

class OperatorDiv : public SuperCash
{
public:
	int GetCashResult()
	{
		return (this->GetNumberA() / this->GetNumberB());
	}
};

class CContextCash
{
public:
	SuperCash* m_pSuperCash;

public:
	CContextCash(OperatorMode enumData_)
	{
		m_pSuperCash = NULL;
		//this->m_pSuperCash = superCash_;
		switch (enumData_)
		{
		case ADD_OPERATOR:
			this->m_pSuperCash = new OperatorAdd();
			break;
		case SUB_OPERATOR:
			this->m_pSuperCash = new OperatorSub();
			break;
		case MUL_OPERATOR:
			this->m_pSuperCash = new OperatorMul();
			break;
		case DIV_OPERATOR:
			this->m_pSuperCash = new OperatorDiv();
			break;
		}

	}

	//导出接口
	int GetResult()
	{
		return m_pSuperCash->GetCashResult();
	}

	~CContextCash()
	{
		delete m_pSuperCash;
		m_pSuperCash = NULL;
	}
};






