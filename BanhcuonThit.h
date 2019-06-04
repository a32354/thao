#pragma once
#include "Banhcuon.h"
#include <iostream>
using namespace std;
class BanhcuonThit:public Banhcuon
{
protected:
	int khoiluongnhan;
	double Gianhan;
public:
	BanhcuonThit();
	BanhcuonThit(int,double,int,double);
	~BanhcuonThit();
	void setKLnhan(int);
	void setGianhan(double);
	int getKLnhan()const;
	double getGianhan()const;
	double price()const;
	
};
BanhcuonThit::BanhcuonThit():Banhcuon(),khoiluongnhan(0),Gianhan(0)
{}
BanhcuonThit::BanhcuonThit(int klv,double gv,int kln,double gn):Banhcuon(klv,gv),khoiluongnhan(kln),Gianhan(gn)
{}
BanhcuonThit::~BanhcuonThit()
{}
void BanhcuonThit::setKLnhan(int kln){
	this->khoiluongnhan=kln;
}
void BanhcuonThit::setGianhan(double gn){
	this->Gianhan=gn;
}
int BanhcuonThit::getKLnhan()const{
	return this->khoiluongnhan;
}
double BanhcuonThit::getGianhan()const{
	return this->Gianhan;
}
double BanhcuonThit::price()const{
	return this->khoiluongnhan*this->Gianhan+this->Khoiluongvo*this->Giavo;
}