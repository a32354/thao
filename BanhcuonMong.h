#pragma once
#include "Banhcuon.h"
#include <iostream>
using namespace std;
class BanhcuonMong:public Banhcuon
{
protected:
	int khoiluongnhan;
	double Gianhan;
public:
	BanhcuonMong();
	BanhcuonMong(int,double,int,double);
	~BanhcuonMong();
	void setKLnhan(int);
	void setGianhan(double);
	int getKLnhan()const;
	double getGianhan()const;
	double price()const;
	
};
BanhcuonMong::BanhcuonMong():Banhcuon(),khoiluongnhan(0),Gianhan(0)
{}
BanhcuonMong::BanhcuonMong(int klv,double gv,int kln,double gn):Banhcuon(klv,gv),khoiluongnhan(kln),Gianhan(gn)
{}
BanhcuonMong::~BanhcuonMong()
{}
void BanhcuonMong::setKLnhan(int kln){
	this->khoiluongnhan=kln;
}
void BanhcuonMong::setGianhan(double gn){
	this->Gianhan=gn;
}
int BanhcuonMong::getKLnhan()const{
	return this->khoiluongnhan;
}
double BanhcuonMong::getGianhan()const{
	return this->Gianhan;
}
double BanhcuonMong::price()const{
	return this->khoiluongnhan*this->Gianhan+this->Khoiluongvo*this->Giavo;
}