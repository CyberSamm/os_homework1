#include<iostream>
#include<vector>
#include"ComplexNum.h"

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
