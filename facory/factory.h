#pragma once
#include<iostream>
using namespace std;
class product
{
public:
	product(){}
	product(int reg_code, int cat, int cat_value[]);
	
	void dispaly();
	product update_code(int no, int cat_code);
	void operator=(const product& c);
	product(const product& c);
	~product();
private:
	int registration_code;//工厂注册码
	int catagories;       //产品种类数
	int* category_codes;  //每种产品的种类编码
};