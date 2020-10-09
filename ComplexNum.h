#pragma once
#include<iostream>
#include<vector>

class ComplexNum {
private:
	double mRe = 0; //Действительная часть комплексного числа.
	double mIm = 0; //Мнимая часть комплексного числа. 
public:
	ComplexNum();
	ComplexNum(const double& a); 
	ComplexNum(const double& a, const double& b);

	double modul();
 
	double getRealP();

	double getImaginaryP();

	ComplexNum operator+(const ComplexNum& a);
	ComplexNum operator-(const ComplexNum& a);
	ComplexNum operator*(const double& x);
 
	friend std::ostream& operator<<(std::ostream& os, const ComplexNum& num);
};
void bubbleSort(std::vector<ComplexNum>& v);
