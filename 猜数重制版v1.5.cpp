#include<bits/stdc++.h>
#include<time.h> 
using namespace std;
int main() {
	long long int zx,zd,da,c,cs=0;
	int pan;
	cout<<"�����֣�1.�򵥣�2.��ͨ��3.���ѣ�4.���ѣ�5.������6.�Զ���"<<endl;
	cin>>pan;
	if(pan==1) {
		zx=1;
		zd=100;
		cout<<"�򵥣�1-100��"<<endl;
	} else if(pan==2) {
		zx=1;
		zd=200;
		cout<<"��ͨ��1-200)"<<endl;
	} else if(pan==3) {
		zx=1;
		zd=300;
		cout<<"���ѣ�1-300��"<<endl;
	} else if(pan==4) {
		zx=1;
		zd=400;
		cout<<"���ѣ�1-400��"<<endl;
	} else if(pan==5) {
		zx=1;
		zd=500;
		cout<<"������1-500��"<<endl;
	} else if(pan==6) {
		cout<<"�Զ��壬��ֱ������Сֵ�����ֵ"<<endl;
		cin>>zx>>zd;
		cout<<"��Сֵ��"<<zx<<"���ֵ��"<<zd<<endl;
	}
	da=rand()%zd/zx;
	while(true) {
		cin>>c;
		if(c<da) {
			cout<<"С��"<<endl;
			cs++;
		} else if(c>da) {
			cout<<"����"<<endl;
			cs++;
		} else if(c==da) {
			cout<<"���У�";
			break;
		}
	}
	_sleep(200);
	cout<<"����"<<cs<<"��";
	_sleep(2000);
	return 0; 
}
