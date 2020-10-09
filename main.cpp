#include<iostream>
#include<vector>
#include"ComplexNum.h"

int main(){
	int n;
 	std::cin >> n;

 	double realPart = 0;
	double imaginaryPart = 0;
	std::vector<ComplexNum> v;
	for (int i = 0; i < n; ++i) {
		std::cin >> realPart >> imaginaryPart;
		ComplexNum c{ realPart, imaginaryPart };
		v.push_back(c);
	}

	bubbleSort(v);

	for (int i = 0; i < n; ++i) {
		std::cout << v[i];
	}
	return 0;	
}
