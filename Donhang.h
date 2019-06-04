#include "BanhcuonChay.h"
#include "BanhcuonMong.h"
#include "BanhcuonThit.h"
#include "BanhcuonDB.h"
#include <iostream>
using namespace std;
class Donhang
{
protected:
	BanhcuonChay a;
	BanhcuonMong b;
	BanhcuonThit c;
	BanhcuonDB d;
public:
	Donhang(BanhcuonChay,BanhcuonMong,BanhcuonThit,BanhcuonDB);
	void Dongia()const;
	
};
Donhang::Donhang(BanhcuonChay a,BanhcuonMong b,BanhcuonThit c,BanhcuonDB d){
	this->a=a;
	this->b=b;
	this->c=c;
	this->d=d;
}
void Donhang::Dongia()const{
	cout<<"Banh cuon chay :"<<a.price()<<endl;
	cout<<"Banh cuon mong :"<<b.price()<<endl;
	cout<<"Banh cuon thit :"<<c.price()<<endl;
	cout<<"Banh cuon dac biet:"<<d.price()<<endl;
}