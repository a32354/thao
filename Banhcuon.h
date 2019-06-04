#pragma once
#include <iostream>
using namespace std;
class Banhcuon
{
protected:
	int Khoiluongvo;
	double Giavo;
public:
	Banhcuon();
	Banhcuon(int,double);
	void setKLvo(int);
	void setGiavo(double);
	int getKLvo()const;
	double getGiavo()const;
	double price()const;
	~Banhcuon();
	
};
Banhcuon::Banhcuon():Khoiluongvo(0),Giavo(0)
{}
Banhcuon::Banhcuon(int Kl,double Giavo):Khoiluongvo(Kl),Giavo(Giavo)
{
}
Banhcuon::~Banhcuon()
{}
void Banhcuon::setKLvo(int Kl){
	this->Khoiluongvo=Kl;
}
void Banhcuon::setGiavo(double Giavo){
	this->Giavo=Giavo;
}
int Banhcuon::getKLvo()const{
	return this->Khoiluongvo;
}
double Banhcuon::getGiavo()const{
	return this->Giavo;
}
double Banhcuon::price()const{
	return 0;
}