
#ifndef CANCHA_H
#define CANCHA_H
#include "Player.h"
#include "Point.h"
#include "style.h"
#include <iostream>
#include "delantero.h"
#include "portero.h"

class Cancha {
public:
	int filas;
    int columnas;
    char** cancha;
	Point pelota;
	int golesEquiop1;
	int golesEquiop2;
	
	void inicializarPelota(int x, int y);
    Cancha(int filas, int columnas);
    void mostrarCancha( delantero& ,  delantero& , portero&, portero&,  Point& pelota, int& , int& );
	
    // ... otros métodos que puedas necesitar
	~Cancha();
	

};

#endif


