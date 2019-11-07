#include <iostream>


using namespace std;



int factorial (int a);
// Se crea el método del factorial


int main(int argc, char ** argv)
{
	double* arreglo = NULL;
	int n_side;
	int i;
	
	cout<<"Escriba un numero"<<endl;
    cin>>n_side;
	cout << n_side << endl;

	arreglo = new double [n_side];
	
	cout << "lista factorial" << endl;
	
	for(int i = 0; i< n_side; i ++){
		arreglo[i]= factorial(i);
		cout << arreglo[i] << endl;
	}
	delete [] arreglo;
	return 0;
}

// Condicional que agrega los factorial en la matriz
	
int factorial (int a)
{
    if (a>1)
	{
		return (a*factorial(a-1));
	}
    else{
        return 1;
	}
}



