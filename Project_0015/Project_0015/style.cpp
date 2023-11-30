
#include<iostream>
	//Color's
void BlackColor(){
	std::cout<<"\x1b[1;30m";
}
void RedColor(){
	std::cout<<"\x1b[1;31m";
}
void GreenColor(){
	std::cout<<"\x1b[1;32m";
}
void YellowColor(){
	std::cout<<"\x1b[1;33m";
}
void BlueColor(){
	std::cout<<"\x1b[1;34m";
}
void MagentaColor(){
	std::cout<<"\x1b[1;35m";
}
void CianColor(){
	std::cout<<"\x1b[1;36m";
}
void WhiteColor(){
	std::cout<<"\x1b[1;37m";
}
void DefaultColor(){
	std::cout << "\x1B[39m";
}
void RGBColor(int R,int G,int B){
	std::cout<<"\x1b[38;2;"<<R<<";"<<G<<";"<<B<<"m";
}
		//Light
void LightGray(){
	std::cout << "\x1B[90m";
}
void LightRed(){
	std::cout << "\x1B[91m";
}
void LightGreen(){
	std::cout << "\x1B[92m";
}
void LightYellow(){
	std::cout << "\x1B[93m";
}
void LightBlue(){
	std::cout << "\x1B[94m";
}
void LightMagenta(){
	std::cout << "\x1B[95m";
}
void LightCian(){
	std::cout << "\x1B[96m";
}
void LightWhite(){
	std::cout << "\x1B[97m";
}
	//BackgroundColor's
void BlackColorB(){
	std::cout<<"\x1b[1;40m";
}
void RedColorB(){
	std::cout<<"\x1b[1;41m";
}
void GreenColorB(){
	std::cout<<"\x1b[1;42m";
}
void YellowColorB(){
	std::cout<<"\x1b[1;43m";
}
void BlueColorB(){
	std::cout<<"\x1b[1;44m";
}
void MagentaColorB(){
	std::cout<<"\x1b[1;45m";
}
void CianColorB(){
	std::cout<<"\x1b[1;46m";
}
void WhiteColorB(){
	std::cout<<"\x1b[1;47m";
}
void DefaultColorB(){
	std::cout << "\x1B[49m";
}
void RGBColorB(int R,int G,int B){
	std::cout<<"\x1b[48;2;"<<R<<";"<<G<<";"<<B<<"m";
}
	//Light
void LightGrayB(){
	std::cout << "\x1B[100m";
}
void LightRedB(){
	std::cout << "\x1B[101m";
}
void LightGreenB(){
	std::cout << "\x1B[102m";
}
void LightYellowB(){
	std::cout << "\x1B[103m";
}
void LightBlueB(){
	std::cout << "\x1B[104m";
}
void LightMagentaB(){
	std::cout << "\x1B[105m";
}
void LightCianB(){
	std::cout << "\x1B[106m";
}
void LightWhiteB(){
	std::cout << "\x1B[107m";
}
	//Features
void DefaultFormat(){
	std::cout << "\x1b[0m";
}
void BoldFormat(){
	std::cout << "\x1b[1m";
}
void UnderlinedFormat(){
	std::cout << "\x1b[4m";
}
void BlinkFormat(){
	std::cout << "\x1b[5m";
}
void DefaultBoldFormat(){
	std::cout << "\x1b[21m";
}
void DefaultUnderlinedFormat(){
	std::cout << "\x1b[24m";
}
void DefaultBlinkFormat(){
	std::cout << "\x1b[25m";
}
	
	
	//Funcionalidades de pantalla
void updateWindow(){
	std::system("cls");
}
void hideCursor(){
	std::cout << "\x1B[?25l";
}
void showCursor(){
	std::cout << "\x1B[?25h";
}
void restoreScreen(){
	std::cout << "\x1B[?47l";
}
void saveScreen(){
	std::cout << "\x1B[?47h";
}
void positionCursor(int line,int column){
	std::cout << "\x1b[" << line << ";" << column << "H";
}

