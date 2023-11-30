
#include "window.h"
#include<iostream>
#include <cstdlib> // Para system("cls") en Windows
#include <conio.h> // Para _getch() en Windows

#include "style.h"
window::window() {
	int height = 50;		//alto
	int width = 100;		//ancho
}
window::window(int _height,int _width){
	int height = _height;	//alto
	int width = _width;		//ancho
}

void window::marcoPantalla(){
	//..........................................PANTALLA NO EDITABLE
	BlueColor();
	BoldFormat();
	for(int i=1;i<26;i++){
		positionCursor(i,1);
		std::cout<<"* ";
		if(i==1||i==3||i==25){
			
			for(int j=1;j<49;j++)std::cout<<"* ";
		}else if(i==2){
			WhiteColor();
			std::cout<<"\t\t\t\tPESS JUNIORS.v1";
			positionCursor(i,2*41-1);
			BlueColor();
			std::cout<<"* ";
			RedColor();
			std::cout<<"   CONTROLES ";
			
		}else{
			positionCursor(i,2*41-1);
			std::cout<<"* ";
			GreenColor();
			switch(i){
			case  5: std::cout<<" W -> UP_1";break;
			case  6: std::cout<<" A -> LEFT_1";break;
			case  7: std::cout<<" S -> RIGHT_1";break;
			case  8: std::cout<<" D -> DOWN_1";break;
			case 10: std::cout<<" I -> UP_2";break;
			case 11: std::cout<<" J -> LEFT_2";break;
			case 12: std::cout<<" K -> RIGHT_3";break;
			case 13: std::cout<<" L -> DOWN_4";break;
			case 15: std::cout<<" 0 -> SALIR";break;
			case 16: std::cout<<" 1 -> INICIAR";break;
			case 18: std::cout<<" Q -> P1 UP";break;
			case 19: std::cout<<" E -> P1 DOWN"; break;
			case 21: std::cout<<" U -> P2 UP";break;
			case 22: std::cout<<" O -> P2 DOWN"; break;
			
			default:break;
			}
		}
		BlueColor();
		positionCursor(i,2*50-1);
		std::cout<<"* ";
	}
	//..........................................PANTALLA DE INICIO
}
void window::pelotaInicio(int y,int x){
	GreenColor();
	positionCursor(y,x);
	std::cout<<"        _...----.._";std::cout<<"\n";
	positionCursor(y+1,x);
	std::cout<<"     ,:':::::.     `>.";std::cout<<"\n";
	positionCursor(y+2,x);
	std::cout<<"   ,' |::::::'     |:::.";std::cout<<"\n";
	positionCursor(y+3,x);
	std::cout<<"  /      ::        :::::\\ ";std::cout<<"\n";
	positionCursor(y+4,x);
	std::cout<<" /         _____      :::\\ ";std::cout<<"\n";
	positionCursor(y+5,x);
	std::cout<<":         /:::::\\      `  :";std::cout<<"\n";
	positionCursor(y+6,x);
	std::cout<<"| ,.     /:MESSI:\\        |";std::cout<<"\n";
	positionCursor(y+7,x);
	std::cout<<"|::::.   `::CR7::'        |";std::cout<<"\n";
	positionCursor(y+8,x);
	std::cout<<"::::::     `:::'      ,.  ;";std::cout<<"\n";
	positionCursor(y+9,x);
	std::cout<<" \\:::'              ,::::/";std::cout<<"\n";
	positionCursor(y+10,x);
	std::cout<<"  \\                 \\:::/";std::cout<<"\n";
	positionCursor(y+11,x);
	std::cout<<"   `.     ,:.        ::'";std::cout<<"\n";
	positionCursor(y+12,x);
	std::cout<<"     `-.::::::..  _.''";std::cout<<"\n";
	positionCursor(y+13,x);
	std::cout<<"        ```----'''";std::cout<<"\n";
}
void window::canchaInicio(int y,int x){
	WhiteColor();
	positionCursor(y++,x);
	std::cout<<"                              =============================";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<"                              |\\                          |\\ ";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<"                              | \\    @ \\_    /            | \\";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<"                              |  \\  /  \\_o--<_/           | o\\";std::cout<<"\n";
	positionCursor(y++,x-10);
	std::cout<<"________________________________________|___|/______________________|-|\\|______";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<"         /                   /    /              _ o     / /|_       ";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<"        /                   /  _o'------------- / / \\ ----/          ";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<"       /                   /  /|\\_               /\\    /             ";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<"      /                   /_ /\\ _______________ / / __/              ";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<"     /                      / /                                      ";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<"    /                                                                ";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<"   /                                                                 ";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<"  /                                                                  ";std::cout<<"\n";
	positionCursor(y++,x);
	std::cout<<" /___________________________________________________________________";std::cout<<"\n";
	YellowColor();
	positionCursor(y+3,x+35);
	std::cout<<"# PRESS 1 TO START";std::cout<<"\n";
	positionCursor(y+4,x+35);
	std::cout<<"# PRESS 0 TO QUIT";std::cout<<"\n";
}
void canchaJuego(int y,int x){
	WhiteColor();
	positionCursor(y,2*(x)-1);
	for(int i=0;i<15;i++){
		(i>3 && i<11)?CianColor():WhiteColor();
		positionCursor(y,2*(x)-1);std::cout<<"* ";
		positionCursor(y,2*(x+34)-1);std::cout<<"* ";
		positionCursor(y,2*(x+1)-1);
		if(i==0 || i==14)std::cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ";
		//WhiteColor();
		//positionCursor(y,2*(x+17)-1);std::cout<<"* ";
		y++;
		
	}
}

void window::pant_carga (int x, int y){
	
WhiteColor();
std::cout<<"	";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"	                           -------------------";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"                            My World Cup Team";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"                           -------------------";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"                                                               Jackie";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"                                                              Charlton";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"        Ronaldo     Steve     Falcao      Steve      Bobby       ,/)";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"                    Sumner               Wooddin    Charlton     |_|";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"           _          _          _          _          _         ].[";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"          |.|        |.|        |.|        |.|        |.|      /~`-'~\\";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"          ]^[        ]^[        ]^[        ]^[        ]^[     (<|%  |>)";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"        /~`-'~\\    /~`-'~\\    /~`-'~\\    /~`-'~\\    /~`-'~\\    \\|___|/";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"       {<|%  |>}  {<|%  |>}  {<|%  |>}  {<|%  |>}  {<|%  |>}   {/   \\}";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"        \\|___|/    \\|___|/    \\|___|/    \\|___|/    \\|___|/    /__|__\\";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"       /\\    \\      /   \\      /   \\      /   \\      /   \\     | / \\ |";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"       |/>/|__\\    /__|__\\    /__|__\\    /__|__\\    /__|__\\    |/   \\|";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"      _|)   \\ |    | / \\ |    | / \\ |    | / \\ |    | / \\ |    {}   {}";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"     (_,|    \\)    (/   \\)    (/   \\)    (/   \\)    (/   \\)    |)   (|";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"     / \\     (|_  _|)   (|_  _|)   (|_  _|)   (|_  _|)   (|_  _||   ||_";std::cout<<"\n";
positionCursor(y++,x);
std::cout<<"  .,.\\_/,...,|,_)(_,|,.,|,_)(_,|,.,|,_)(_,|,.,|,_)(_,|,.,|,_)(_,|.,.|,_).,.";std::cout<<"\n";
YellowColor();
	positionCursor(y+3,x+35);
	

}
	
	

