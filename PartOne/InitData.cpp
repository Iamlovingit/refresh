#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int initData(string filename, vector<int> &outV)
{
	ifstream infile;
	infile.open(filename);
	if(!infile)
	{
		cout << "open file error!" << endl;
		return -1;
	}

	outV.clear();
	string line;

	int t1;

	while(infile >> t1)
		outV.push_back(t1);

	infile.close();
	return 0;
}


#if 0
int main(int argc, char** argv)
{
	vector<int> data;
	int ret;
	ret = initData("TestData.txt", data);
	if(ret<0)
	{
		cout << "initData error" << endl;
		return -1;
	}

	for(auto it : data)
		cout << it << endl;
	return 0;
}
#endif
