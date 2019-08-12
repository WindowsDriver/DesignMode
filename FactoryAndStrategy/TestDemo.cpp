#include <iostream>
#include "cash.h"

int main()
{
	//这里把工厂模式与策略这模式合并后进行演示
	CContextCash* ContextCash = new CContextCash(ADD_OPERATOR);

	int retValue = ContextCash->GetResult();
	std::cout << "计算的结果是：" << retValue << std::endl;
	exit(EXIT_SUCCESS);
}