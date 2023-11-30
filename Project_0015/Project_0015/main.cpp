
#include <conio.h>
#include <iostream>
#include <cstdlib> // Para system("cls") en Windows
#include "style.h"
#include "point.h"
#include "player.h"
#include "Cancha.h"
#include "window.h"
#include "delantero.h"
int kbhit() {
    int ch = _getch();
    if (ch != EOF) {
        ungetch(ch);
        return 1;
    } else {
        return 0;
    }
}

int main(){
	hideCursor();
	int opcion;
	int choice;
	int filas = 11;
    int columnas = 30;
	int golesEquipo1 = 0;
	int golesEquipo2 = 0;

	updateWindow();

	Cancha miCancha(filas, columnas);
    delantero messi(Point(12, 5));
	delantero cristiano(Point(18, 5));
	portero TerStegen(Point(1, 5));
	portero Cortouis(Point(28, 5));
	window miWindow(40,60);
    Point pelota(15, 5);
	miCancha.inicializarPelota(pelota.getX(), pelota.getY());
	
	while (true){
		updateWindow();
		miWindow.marcoPantalla();
		
		miWindow.canchaInicio(4,12);
		miWindow.pelotaInicio(10,4);
		positionCursor(28,0);
        std::cin >> choice;
		
	if (choice == 1){
	 while (true) {
		updateWindow();
		miWindow.marcoPantalla();
	
		positionCursor(5,20);
		GreenColor();
		positionCursor(6,15);
        std::cout << "Menu de Opciones:" << std::endl;
		positionCursor(7,15);
        std::cout << "1. Iniciar Juego" << std::endl;
		positionCursor(8,15);
        std::cout << "2. Opciones" << std::endl;
		positionCursor(9,15);
        std::cout << "0. Salir del Juego" << std::endl;
		positionCursor(10,15);
        std::cout << "Seleccione una opcion: ";
		DefaultColor();
        std::cin >> opcion;
		
        switch (opcion) {	
            case 1:
			{
				miWindow.pant_carga(10,4);
				positionCursor(10,15);
				std::cout << "PRESS ANY BUTTON TO START" << std::endl;
				char key = _getch();
				
				updateWindow();
				miWindow.marcoPantalla();
			
				
				
				while (true) {
					
					miCancha.mostrarCancha(messi, cristiano,TerStegen,Cortouis, pelota, golesEquipo1, golesEquipo2);

					// Verificar si una tecla está presionada usando kbhit
					if (kbhit()) {
						char input = _getch();

						switch (input) {
							case 'W':
							case 'w':
								messi.moveUp();
								if(messi.miPlayer==pelota){
									pelota.setY(pelota.getY()-1);
								}
								break;
							case 'S':
							case 's':
								messi.moveDown();
								if(messi.miPlayer==pelota){
									pelota.setY(pelota.getY()+1);
								}
								break;
							case 'A':
							case 'a':
								messi.moveLeft();
								if(messi.miPlayer==pelota){
									pelota.setX(pelota.getX()-1);
								}
								break;
							case 'D':
							case 'd':
								messi.moveRight();
								if(messi.miPlayer==pelota){
									pelota.setX(pelota.getX()+1);
								}
								break;
							case 'I':
							case 'i':
								cristiano.moveUp();
								if(cristiano.miPlayer==pelota){
									pelota.setY(pelota.getY()-1);
								}
								break;
							case 'K':
							case 'k':
								cristiano.moveDown();
								if(cristiano.miPlayer==pelota){
									pelota.setY(pelota.getY()+1);
								}
								break;
							case 'J':
							case 'j':
								cristiano.moveLeft();
								if(cristiano.miPlayer==pelota){
									pelota.setX(pelota.getX()-1);
								}
								break;
							case 'L':
							case 'l':
								cristiano.moveRight();
								if(cristiano.miPlayer==pelota){
									pelota.setX(pelota.getX()+1);
								}
								break;
							case 'q':
							case 'Q':
								TerStegen.moveDown();
								if(TerStegen.miPlayer==pelota){
									pelota.setY(pelota.getY()+1);
								}
								break;
							case 'e':
							case 'E':
								TerStegen.moveUp();
								if(TerStegen.miPlayer==pelota){
									pelota.setY(pelota.getY()-1);
								}
								break;
							case 'u':
							case 'U':
								Cortouis.moveDown();
								if(Cortouis.miPlayer==pelota){
									pelota.setY(pelota.getY()+1);
								}
								break;
							case 'o':
							case 'O':
								Cortouis.moveUp();
								if(Cortouis.miPlayer==pelota){
									pelota.setY(pelota.getY()-1);
								}
								break;
							case '0':
								updateWindow();
								miWindow.marcoPantalla();
								positionCursor(5, 20);
								RedColor();
								std::cout << "Juego terminado";
								DefaultFormat();
								positionCursor(26, 0);
								return 0;
							default:
								break;
						}
					}
				}
			}	
            case 2:
                // Lógica para mostrar las opciones del juego
                std::cout << "Opciones del juego..." << std::endl;
                break;
			case 0:
                // Lógica para salir del juego
				updateWindow();
				miWindow.marcoPantalla();
				positionCursor(5,20);
				RedColor();
                std::cout << "Saliendo del juego..." << std::endl;
                DefaultFormat();
				positionCursor(26,0);
				return 0;
				break;
            default:
                std::cout << "Opcion no válida. Por favor, seleccione una opción valida." << std::endl;
                break;
			
         }
		}
	}
	}
	
	
	
	

	DefaultFormat();
	positionCursor(26,0);
	return 0;
	
}


