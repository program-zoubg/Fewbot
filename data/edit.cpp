#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	bool k=false;
	cout<<"׷�ӻ����ص�(y/n)";
	char mode;
	string data;
	cin>>mode;
	if(mode=='y') k=true;
	cout<<"��ʽ������:����,..."<<endl;
	cin>>data;
	if(k) {
		fstream f;
		// ׷��д��
		f.open("data.ini",ios::out|ios::app);
		// ��������д�������
		f<<data<<endl;
		f.close();
	} else {
		fstream f;
		// ����д��
		f.open("data.ini",ios::out);
		// ��������д�������
		f<<','<<data<<endl;
		f.close();
	}

	return 0;
}
