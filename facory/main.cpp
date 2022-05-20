#include"factory.h"
int mian()
{
	int cat[] = { 0203,0235 }, code[] = { 234,256,299 };
	product f1(1,2,cat), f2(2,3,code);
	f1.dispaly();
	f2.dispaly();
	f1 = f2;
	f1.dispaly();
	f2.update_code(1, 2313513);
	f2.dispaly();
	product f3 = f2;
	f3.dispaly();

	return 0;
}