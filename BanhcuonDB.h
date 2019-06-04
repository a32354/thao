#pragma once
#include <iostream>
#include "BanhcuonThit.h"
using namespace std;
class BanhcuonDB:public BanhcuonThit
{
protected:
	int khoiluong;
	double Giathit;
public:
	BanhcuonDB();
	BanhcuonDB(int,double,int,double,int,double);
	void setKL(int);
	void setGiathit(double);
	int getKL()const;
	double getGiathit()const;
	double price()const;
	~BanhcuonDB();
};
BanhcuonDB::BanhcuonDB():BanhcuonThit(),khoiluong(0),Giathit(0)
{}
BanhcuonDB::BanhcuonDB(int klv,double gv,int kln,double gn,int klt,double gt):BanhcuonThit(klv,gv,kln,gn),khoiluong(klt),Giathit(gt)
{}
BanhcuonDB::~BanhcuonDB()
{}
void BanhcuonDB::setKL(int klt){
	this->khoiluong=klt;
}
void BanhcuonDB::setGiathit(double gt){
	this->Giathit=gt;
}
int BanhcuonDB::getKL()const{
	return this->khoiluong;
}
double BanhcuonDB::getGiathit()const{
	return this->Giathit;
}
double BanhcuonDB::price()const{
	return this->khoiluongnhan*this->Gianhan+this->Khoiluongvo*this->Giavo+this->khoiluong*this->Giathit;
}