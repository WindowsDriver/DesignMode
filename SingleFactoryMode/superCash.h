#pragma once
#include <iostream>

class SuperCash
{
private:
	int m_numberA;
	int m_numberB;
public:
	SuperCash()
	{
		m_numberA = 10;
		m_numberB = 1110;
	}

	SuperCash(int nParaA_, int nParaB_)
	{
		this->m_numberA = nParaA_;
		this->m_numberB = nParaB_;
	}

	void SetNumberA(int nNumberA_)
	{
		this->m_numberA = nNumberA_;
	}

	void SetNumberB(int nNumberB_)
	{
		this->m_numberB = nNumberB_;
	}

	int GetNumberA()
	{
		return this->m_numberA;
	}

	int GetNumberB()
	{
		return this->m_numberB;
	}

	~SuperCash() {}

	//抽象接口，用于子类重写
	virtual int GetCashResult()
	{
		int _result = 0;
		return _result;
	}
};
