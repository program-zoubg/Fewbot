#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	bool k=false;
	cout<<"追加还是重叠(y/n)";
	char mode;
	string data;
	cin>>mode;
	if(mode=='y') k=true;
	cout<<"格式：类型:数据,..."<<endl;
	cin>>data;
	if(k) {
		fstream f;
		// 追加写入
		f.open("data.ini",ios::out|ios::app);
		// 输入你想写入的内容
		f<<data<<endl;
		f.close();
	} else {
		fstream f;
		// 覆盖写入
		f.open("data.ini",ios::out);
		// 输入你想写入的内容
		f<<','<<data<<endl;
		f.close();
	}

	return 0;
}
