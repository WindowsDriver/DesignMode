#include <iostream>
#include "cash.h"

//类的静态成员变量使用前要在main主函数前初始化
//SuperCash* OperatorFactor::cashSuper = NULL;

int main()
{

	// 测试下 策略者模式
	SuperCash* pCashSuper = new OperatorMul();
	CContextCash* ContextCash = new CContextCash(pCashSuper);
	int retValue = ContextCash->GetResult();
	std::cout << "计算的结果是：" << retValue << std::endl;


}