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

class OperatorFactor
{

private:
	static SuperCash* cashSuper;
public:

	static SuperCash* CreateOperator(OperatorMode enumData_)
	{

		switch (enumData_)
		{
		case ADD_OPERATOR:
			cashSuper = new OperatorAdd();
			break;
		case SUB_OPERATOR:
			cashSuper = new OperatorSub();
			break;
		case MUL_OPERATOR:
			cashSuper = new OperatorMul();
			break;
		case DIV_OPERATOR:
			cashSuper = new OperatorDiv();
			break;
		}

		return cashSuper;
	}

	~OperatorFactor()
	{
		//delete cashSuper;
		//觉得这里不应该析构
	}
};

class CContextCash
{
public:
	SuperCash* m_pSuperCash;
public:
	CContextCash(SuperCash* superCash_)
	{
		m_pSuperCash = NULL;
		this->m_pSuperCash = superCash_;
	}

	CContextCash()
	{
		m_pSuperCash = NULL;
	}

	///导出接口
	int GetResult()
	{
		return m_pSuperCash->GetCashResult();
	}

	~CContextCash()
	{
		m_pSuperCash = NULL;
	}
};






