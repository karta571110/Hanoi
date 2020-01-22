

#include <iostream>

using namespace std;


int time = 0;
void HaTower(int num, char start, char temp, char end)
{
	if (num>0) 
	{
		HaTower(num-1,start,end,temp );
		cout << num << ends << start << "->" << end<<endl; 
		HaTower(num - 1, temp, start, end);
		time++;
	}
	
}

int main()
{
	int numOut;
	

	cout << "請輸入要解幾個盤子:" << endl;
	cin >> numOut;

	HaTower(numOut, 'A', 'B', 'C');

	cout << "執行次數:" << time << endl;
}


