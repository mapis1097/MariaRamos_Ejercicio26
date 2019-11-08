#include <fstream>
#include <iostream>
#include <string.h>
using namespace std; 

float * read_file(string filename, int *n_points);
float add_values(float *x, int n_points, float *y);


int main(){
  float *x=NULL;
  float *y=NULL;
  int n_x=0;
  int n_y=0;
  float total=0;
  float *multiplicacion =NULL;
    
  x = read_file("valores_x.txt", &n_x);
  y = read_file("valores_y.txt", &n_y);

  add_values(x, n_x, y);
    
  return 0;
}

float * read_file(string filename, int *n_points){
  int n_lines=0;
  ifstream infile; 
  string line;
  int i;
  float *array;

  /*cuenta lineas*/
  infile.open(filename); 
  getline(infile, line);
  while(infile){
    n_lines++;
    getline(infile, line);
  }
  infile.close();
  *n_points = n_lines;

  /*reserva la memoria necesaria*/
  array = new float[n_lines];

  /*carga los valores*/
  i=0;
  infile.open(filename); 
  getline(infile, line);  
  while(infile){
    array[i] = atof(line.c_str());
    i++;
    getline(infile, line);
  }
  infile.close();

  return array;
}

float add_values(float *x, int n_points, float *y){
  float a;
  int i;
  
  for(i=0;i<n_points;i++){
    a = *(x+i) * *(y+i);
    cout << "la matriz multiplicacion" << a << endl;
  }
   
  return a;
}

