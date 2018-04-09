#include <iostream>
#include <vector>
#include <string>
using namespace std;

extern int initData(string filename, vector<int> &outV);

int InsertionSort(vector<int>& data)
{
	int i,j,key;
	for(j = 1; j < data.size(); j++)
	{
		key = data[j];
		i = j -1;
		while(i>=0&&data[i]>key)
		{
			data[i+1] = data[i];
			i = i-1;
		}
		data[i+1] = key;
	}

	return 0;
}

int main(int agrc, char** argv)
{
	string filename = "TestData.txt";
	vector<int> data;

	int ret = initData(filename, data);

	InsertionSort(data);

	for(auto it : data)
		cout << it << " ";
	cout << endl;
	return 0;
}
