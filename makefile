funciones26.dat : funciones26.x
	./funciones26.x
	./funciones26.x > funciones26.dat
funciones26.x : clase26.cpp
	c++ clase26.cpp -o funciones26.x