#pragma once
#include "Banhcuon.h"
#include <iostream>
using namespace std;
class BanhcuonChay :public Banhcuon
{
protected:
	int khoiluongnhan;
	double Gianhan;
public:
	BanhcuonChay();
	BanhcuonChay(int,double,int,double);
	void setKLnhan(int);
	void setGianhan(double);
	int getKLnhan()const;
	double getGianhan()const;
	double price()const;
	~BanhcuonChay();
	
};
BanhcuonChay::BanhcuonChay():Banhcuon(),khoiluongnhan(0),Gianhan(0)
{}
BanhcuonChay::BanhcuonChay(int klv,double gv,int kln,double gn):Banhcuon(klv,gv),khoiluongnhan(kln),Gianhan(gn)
{}
BanhcuonChay::~BanhcuonChay()
{}
void BanhcuonChay::setKLnhan(int kln){
	this->khoiluongnhan=kln;
}
void BanhcuonChay::setGianhan(double gn){
	this->Gianhan=gn;
}
int BanhcuonChay::getKLnhan()const{
	return this->khoiluongnhan;
}
double BanhcuonChay::getGianhan()const{
	return this->Gianhan;
}
double BanhcuonChay::price()const{
	return this->khoiluongnhan*this->Gianhan+this->Khoiluongvo*this->Giavo;
}