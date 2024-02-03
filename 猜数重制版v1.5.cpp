#include<bits/stdc++.h>
#include<time.h> 
using namespace std;
int main() {
	long long int zx,zd,da,c,cs=0;
	int pan;
	cout<<"猜数字，1.简单，2.普通，3.困难，4.超难，5.地狱，6.自定义"<<endl;
	cin>>pan;
	if(pan==1) {
		zx=1;
		zd=100;
		cout<<"简单（1-100）"<<endl;
	} else if(pan==2) {
		zx=1;
		zd=200;
		cout<<"普通（1-200)"<<endl;
	} else if(pan==3) {
		zx=1;
		zd=300;
		cout<<"困难（1-300）"<<endl;
	} else if(pan==4) {
		zx=1;
		zd=400;
		cout<<"超难（1-400）"<<endl;
	} else if(pan==5) {
		zx=1;
		zd=500;
		cout<<"地狱（1-500）"<<endl;
	} else if(pan==6) {
		cout<<"自定义，请分别输出最小值和最大值"<<endl;
		cin>>zx>>zd;
		cout<<"最小值："<<zx<<"最大值："<<zd<<endl;
	}
	da=rand()%zd/zx;
	while(true) {
		cin>>c;
		if(c<da) {
			cout<<"小了"<<endl;
			cs++;
		} else if(c>da) {
			cout<<"大了"<<endl;
			cs++;
		} else if(c==da) {
			cout<<"猜中！";
			break;
		}
	}
	_sleep(200);
	cout<<"猜了"<<cs<<"次";
	_sleep(2000);
	return 0; 
}
