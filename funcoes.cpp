#include <iostream>

using namespace std;

void texto(); // Prototipei a função texto/ Apresentei a funçao
void soma(int n1, int n2); // Outra prototipagem
void tr(string tra[4]);


int main() {
	
	string transp[4] = {"carro","moto","barco","aviao"};
	
    
    for (int i = 0; i < 10; i++) {
    	texto();
	}
	
	
	soma(15,5);
	
	tr(transp);

	return 0;
	
}




void texto() {
	
	cout << "\nNicolas Lima\n"; // No prompt, o texto virá daqui
}


void soma(int n1, int n2) {
	cout << "Soma dos valores: " << n1 + n2 << "\n";
}


void  tr(string tra[4]) {
	for (int i = 0; i < 4; i++) {
		cout << tra[i] << "\n";
	}
} 

