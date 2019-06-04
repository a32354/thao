#include "Banhcuon.h"
#include "BanhcuonChay.h"
#include "BanhcuonMong.h"
#include "BanhcuonThit.h"
#include "BanhcuonDB.h"
#include "Donhang.h"
#include <iostream>
using namespace std;
int main(){
	BanhcuonChay w(3,10000,3,15000);
	BanhcuonMong e(5,10000,5,10000);
	BanhcuonThit r(3,10000,3,20000);
	BanhcuonDB t(3,10000,2,20000,1,30000);
	Donhang a(w,e,r,t);
	a.Dongia();
	return 0;
}