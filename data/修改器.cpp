#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	bool k=false;
	cout<<"׷�ӻ����ص�(y/n)";
	char yn;
	string n;
	cin>>yn;
	if(yn=='y') k=true;
	cout<<"��ʽ������:����,..."<<endl;
	cin>>n;
	if(k) {
		fstream f;
		//׷��д��
		f.open("Data.ini",ios::out|ios::app);
		//��������д������� 
		f<<n<<endl;
		f.close();
	} else {
		fstream f;
		//д��
		f.open("Data.ini",ios::out);
		//��������д������� 
		f<<','<<n<<endl;
		f.close();
	}
	
	return 0;
}

