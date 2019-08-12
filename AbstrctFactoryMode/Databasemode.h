#pragma once
#include <iostream>

class User
{
	void getID()
	{
		std::cout << " get id success" << std::endl;
	}

	void getUserName()
	{
		std::cout << " get id success" << std::endl;
	}
};

class IUser
{
public:
	virtual void insert(User user) { return; }

	virtual IUser* getUser(int id) { return NULL; }
}; 

class SQLUser : public IUser
{
public: 
	void insert(User user)
	{
		std::cout << "sql server中 给用户添加一条记录 " << std::endl;
	}

	IUser* getUser(int id)
	{
		std::cout << "在sql server中 根据用户ID获取一条记录 " << std::endl;
		return NULL;
	}
};

class AccessUser : public IUser
{
public:
	void insert(User user)
	{
		std::cout << "access server中 给用户添加一条记录 " << std::endl;
	}

	IUser* getUser(int id)
	{
		std::cout << "在access server中 根据用户ID获取一条记录 " << std::endl;
		return NULL;
	}
};

 class FactoryClass
{
public:
	 virtual IUser* createUser()
	 {
		 
		 return NULL;
	 }
};

 class SQLFactoryClass : public FactoryClass
 {
 public:
	 IUser* createUser()
	 {
		 IUser* ret = new SQLUser();
		 std::cout << "返回SQLUser 对象" << std::endl;
		 return ret;
	 }
 };

 class AccessFactoryClass : public FactoryClass
 {
 public:
	 IUser* createUser()
	 {
		 IUser* ret = new AccessUser();
		 std::cout << "返回AccessUser 对象" << std::endl;
		 return ret;
	 }
 };