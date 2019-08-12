#include <iostream>
#include "cash.h"

//类的静态成员变量使用前要在main主函数前初始化
SuperCash* OperatorFactor::cashSuper = NULL;

int main()
{
	// 测试下简单工厂模式
	SuperCash* _superCash = OperatorFactor::CreateOperator(ADD_OPERATOR);
	_superCash->SetNumberA(2);
	_superCash->SetNumberB(220);
	int _retValue = _superCash->GetCashResult();
	std::cout << "the result is :" << _retValue << std::endl;
	//exit(EXIT_SUCCESS);

	// 测试下 策略者模式
	SuperCash* pCashSuper = new OperatorMul();
	CContextCash* ContextCash = new CContextCash(pCashSuper);
	int retValue = ContextCash->GetResult();
	std::cout << "计算的结果是：" << retValue << std::endl;


}