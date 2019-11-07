funciones26.dat multiplicados.dat: funciones26.x segundo.x
	./funciones26.x ./segundo.x
	./segundo.x > multiplicados.dat
	./funciones26.x > funciones26.dat	
funciones26.x : clase26.cpp
	c++ clase26.cpp -o funciones26.x
segundo.x : clase26segundo.cpp
	c++ clase26segundo.cpp -o segundo.x
