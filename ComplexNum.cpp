#include<iostream>
#include<vector>
#include<cmath>
#include "ComplexNum.h"

ComplexNum::ComplexNum() {};

ComplexNum::ComplexNum(const double& a)
	:mRe{a}
{
}

ComplexNum::ComplexNum(const double& a, const double& b)
	: mRe{ a }
	, mIm{ b }
{
}

double ComplexNum::modul(){
	return sqrt(mRe * mRe + mIm * mIm);
}

double ComplexNum::getRealP() {
	return mRe;
}

double ComplexNum::getImaginaryP() {
	return mIm;
}

ComplexNum ComplexNum::operator+(const ComplexNum& a) {
	return  ComplexNum(mRe + a.mRe, mIm + a.mIm);
}

ComplexNum ComplexNum::operator-(const ComplexNum& a) {
	return  ComplexNum(mRe - a.mRe, mIm - a.mIm);
}

ComplexNum ComplexNum::operator*(const double& x) {
	return  ComplexNum(mRe * x, mIm * x);
}

std::ostream& operator<<(std::ostream& os, const ComplexNum& num)
{
	os << num.mRe;
	num.mIm >= 0 ? os << "+" : os << "";
	os << num.mIm << "i\n";
	return os;
}


void bubbleSort(std::vector<ComplexNum>& v){
	int n = v.size();
	ComplexNum temp;

	for(int i = 0; i < n-1; ++i){
		for(int j = 0; j < n-i-1; ++j){
			if(v[j].modul() > v[j+1].modul()){
				temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
		}
	}
}
