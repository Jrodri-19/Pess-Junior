
#include "Cancha.h"

Cancha::Cancha(int filas, int columnas) : filas(filas), columnas(columnas) {
    cancha = new char*[filas];
    for (int i = 0; i < filas; i++) {
        cancha[i] = new char[columnas];
        for (int j = 0; j < columnas; j++) {
            cancha[i][j] = ' ';
        }
    }
}
Cancha::~Cancha(){
	 for (int i = 0; i < filas; ++i) {
        delete[] cancha[i];
    }
    delete[] cancha;

}

void Cancha::inicializarPelota(int x, int y) {
    pelota.setX(x);
    pelota.setY(y);
}

void Cancha::mostrarCancha( delantero& jugador1,  delantero& jugador2, portero& portero1, portero& portero2,  Point& pelota, int& golesEquipo1, int& golesEquipo2) {
    // Imprimir el borde superior de la cancha
	 int lineaAzul = 1;
	 int objetivoX = 11;
	 int objetivoY = 9;
	positionCursor(10,10);
    for (int j = 0; j < columnas + 2; j++) {
		WhiteColorB();
		WhiteColor();
        std::cout << "* ";
		DefaultColorB();
    }
    std::cout << std::endl;
	
    for (int i = 0; i < filas; i++) {
		positionCursor(11+i,10);
		WhiteColor();
		if(i>=2&&i<=8){
			BlueColorB();
		}
		else{
			WhiteColorB();
		}
		
        std::cout << "* "; // Imprimir el borde izquierdo de la cancha
		LightGreenB();
        for (int j = 0; j < columnas; j++) {
			
            // Lógica para mostrar a los jugadores y la pelota en la cancha
            if (i == jugador1.miPlayer.getY() && j == jugador1.miPlayer.getX()) {
				RedColor();
				BoldFormat();
                std::cout << jugador1.simboloPlayer << " ";
				DefaultColor();
            } else if (i == jugador2.miPlayer.getY() && j == jugador2.miPlayer.getX()) {
				YellowColor();
				BoldFormat();
                std::cout << jugador2.simboloPlayer << " ";
				DefaultColor();
            } else if (i == portero1.miPlayer.getY() && j == portero1.miPlayer.getX()) {
				RedColor();
				BoldFormat();
				std::cout << portero1.simboloPlayer << " ";
				DefaultColor();
			} else if (i == portero2.miPlayer.getY() && j == portero2.miPlayer.getX()) {
				YellowColor();
				BoldFormat();
				std::cout << portero2.simboloPlayer << " ";
				DefaultColor();
			} else if (i == pelota.getY() && j == pelota.getX()) {
				CianColorB();
                std::cout << "O ";
				DefaultColor();
				LightGreenB();
				
			
			
            } else {
                std::cout << cancha[i][j] << " ";
            }
			
			 int xPelota = pelota.getX();
				 int yPelota = pelota.getY();
				if (yPelota == lineaAzul && (xPelota == 0 || xPelota == columnas - 1)) {
				// La pelota está sobre la línea azul y en la parte izquierda o derecha de la cancha

				if (xPelota == 0) {
				// Gol para el equipo 2 (suponiendo que el lado izquierdo es el equipo 2)
				golesEquipo2++;
				} else if (xPelota == columnas - 1) {
					// Gol para el equipo 1 (suponiendo que el lado derecho es el equipo 1)
				golesEquipo1++;
						}

			// Mueve la pelota al centro de la cancha
				pelota.setX(columnas / 2);
				pelota.setY(filas / 2);
				}
				
			
		  
		if(jugador1.miPlayer.getY() == (pelota.getY())-1){
				
			}
			
        }
		if(i>=2&&i<=8){
			BlueColorB();
		}
		else{
			WhiteColorB();
		}
        std::cout << "* " << std::endl; // Imprimir el borde derecho de la cancha
		DefaultColorB();
    }
	
	
	
	 positionCursor(11 + filas + 1, 10);
    std::cout << "Goles Equipo 1: " << golesEquipo1 << " - Goles Equipo 2: " << golesEquipo2;

	positionCursor(11+filas,10);
    // Imprimir el borde inferior de la cancha
    for (int j = 0; j < columnas + 2; j++) {
		WhiteColorB();
		WhiteColor();
        std::cout << "* ";
		DefaultColorB();
    }
    std::cout << std::endl;
	

}

/*
	 if (pelota == jugador1.miPlayer || pelota == jugador2.miPlayer || pelota == portero1.miPlayer || pelota == portero2.miPlayer) {
        // La pelota está en contacto con un jugador
        int distanciaMovimientoPelota = 1;
        int distanciaMovimientoLateral = 2;

        if (pelota == jugador1.miPlayer) {
            pelota.setX(pelota.getX() + distanciaMovimientoPelota);
        } else if (pelota == jugador2.miPlayer) {
            pelota.setX(pelota.getX() - distanciaMovimientoPelota);
        } else if (pelota == portero1.miPlayer) {
            pelota.setX(pelota.getX() + distanciaMovimientoPelota);
        } else if (pelota == portero2.miPlayer) {
            pelota.setX(pelota.getX() - distanciaMovimientoPelota);
        }

        if (pelota.getY() == jugador1.miPlayer.getY()) {
            if (pelota.getX() < jugador1.miPlayer.getX()) {
                pelota.setX(pelota.getX() - distanciaMovimientoLateral);
            } else {
                pelota.setX(pelota.getX() + distanciaMovimientoLateral);
            }
        } else if (pelota.getY() == jugador2.miPlayer.getY()) {
            if (pelota.getX() < jugador2.miPlayer.getX()) {
                pelota.setX(pelota.getX() - distanciaMovimientoLateral);
            } else {
                pelota.setX(pelota.getX() + distanciaMovimientoLateral);
            }
        }
        // Puedes agregar verificaciones similares para portero1 y portero2 si es necesario
    }*/
