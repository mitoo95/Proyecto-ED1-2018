#pragma once
#include <iostream>
#include <stdlib.h>
#include <conio.h>

class MapaBack {

public:
	
	MapaBack();

	void CrearPuntostxt(char* id, char* nombre, double latx, double lony);
	void CrearRutastxt(char* origen, char* destino);
	void LeerPuntostxt(char* buff, int psc);
	void LeerRutastxt(char* buff, int id);
	int BuscarPunto(int buscando); // aux de crearruta

private:
	int id;
	char* nombre;
	double x;
	double y;

};