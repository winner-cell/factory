#include"factory.h"
product::product(int reg_code=0, int cat=0,int cat_value[]=NULL)
{
	registration_code = reg_code;
	catagories = cat;
	category_codes = new int[catagories];
	for(int i=0;i<catagories;i++)
		category_codes[i] =cat_value[i];
}
void product::dispaly()
{
	cout << "registration code " << registration_code << " category codes: ";
	for (int i = 0; i < catagories; i++)
		cout << category_codes[i] << ' ';
	cout << endl;
}
product product::update_code(int no,int cat_code)
{
	category_codes[no] = cat_code;
	return *this;
}
void product::operator=(const product& c)
{
	registration_code = c.registration_code;
	catagories = c.catagories;
	category_codes = new int[catagories];
	for (int i = 0; i < catagories; i++)
		category_codes[i] = c.category_codes[i];

}
product::product(const product& c)
{
	registration_code = c.registration_code;
	catagories = c.catagories;
	category_codes = new int[catagories];
	for (int i = 0; i < catagories; i++)
		category_codes[i] = c.category_codes[i];
}
product::~product(void)
{
	delete[] category_codes;
}