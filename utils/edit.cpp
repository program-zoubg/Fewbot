#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	bool k=false;
	cout<<"追加还是覆盖(y/n)";
	char mode;
	string data;
	cin>>mode;
	if(mode=='y') k=true;
	cout<<"格式：类型:数据,..."<<endl;
	cin>>data;
	if(k) {
		fstream f;
		f.open("data.ini",ios::out|ios::app);
		f<<data<<endl;
		f.close();
	} else {
		fstream f;
		f.open("data.ini",ios::out);
		f<<','<<data<<endl;
		f.close();
	}

	return 0;
}
