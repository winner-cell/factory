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
	int registration_code;//����ע����
	int catagories;       //��Ʒ������
	int* category_codes;  //ÿ�ֲ�Ʒ���������
};