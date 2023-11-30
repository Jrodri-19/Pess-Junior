
#include <iostream>
#include "style.h"
#include "point.h"
#include "player.h"
#include "Cancha.h"
#include "window.h"

int main(){
	hideCursor();
	int opcion;
	int choice;
	int filas = 10;
    int columnas = 20;
	updateWindow();
    Cancha miCancha(filas, columnas);
    Player jugador1(Point(8, 5), 'P');
    Player jugador2(Point(12, 5), 'P');
	window miWindow(40,25);
    Point pelota(10, 5);
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
        std::cout << "3. Salir del Juego" << std::endl;
		positionCursor(10,15);
        std::cout << "Seleccione una opcion: ";
		DefaultColor();
        std::cin >> opcion;

        switch (opcion) {	
            case 1:
				while (true) {
					miCancha.mostrarCancha(jugador1, jugador2, pelota);
					char input;
					positionCursor(28,0);
					std::cin >> input;

					if (input == 'W' || input == 'w') {
						jugador1.moveUp();
					} else if (input == 'S' || input == 's') {
						jugador1.moveDown();
					} else if (input == 'A' || input == 'a') {
						jugador1.moveLeft();
					} else if (input == 'D' || input == 'd') {
						jugador1.moveRight();
					} else if(input=='0'){
						updateWindow();
						miWindow.marcoPantalla();
						positionCursor(5,20);
						RedColor();
						std::cout<<"Juego terminado";
						DefaultFormat();
						positionCursor(26,0);
						return 0;
						break;
					}
					if (input == 'I' || input == 'i') {
						jugador2.moveUp();
					} else if (input == 'K' || input == 'k') {
						jugador2.moveDown();
					} else if (input == 'J' || input == 'j') {
						jugador2.moveLeft();
					} else if (input == 'L' || input == 'l') {
						jugador2.moveRight();
					} else if(input=='0'){
						updateWindow();
						miWindow.marcoPantalla();
						positionCursor(5,20);
						RedColor();
						std::cout<<"Juego terminado";
						DefaultFormat();
						positionCursor(26,0);
						return 0;
						break;
					}
				}
                break;
            case 2:
                // Lógica para mostrar las opciones del juego
                std::cout << "Opciones del juego..." << std::endl;
                break;
            case 3:
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
	}else {
		break;
	}
	}
   
	
	/*updateWindow();
	hideCursor();
	std::system("color 10");
	GreenColor();
	
	for(int i=0;i<15;i++){
		positionCursor(i+1+7,30);
		for(int j=0;j<25;j++){
			
			if(i==0||j==0||i==14||j==24||j==12){
				WhiteColorB();
				
			}else{
				LightGreenB();
				
			}
			std::cout<<"  ";
		}
		
	}
	
	RedColor();
	Point m(10,6);
	Player miJugador(m,' ');
	RedColorB();
	miJugador.printPlayer();

	BlueColor();
	Point o(8,20);
	Player otroJugador(o,' ');
	BlackColorB();
	otroJugador.printPlayer();
	

	positionCursor(25,0 );
	DefaultFormat();
	hideCursor();
	m.showPoint();
	return 0;
	*/
	DefaultFormat();
	positionCursor(26,0);
	return 0;
	
}
