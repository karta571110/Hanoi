

#include <iostream>

using namespace std;


int time = 0;
void HaTower(int num, char start, char temp, char end)
{
	if (num>0) 
	{
		HaTower(num - 1, start, end, temp);						//先把 n-1 個盤全部移到 「暫存柱」
		cout << num << ends << start << "->" << end << endl; //再把 第 n 個盤 移動到 「目標柱」
		HaTower(num - 1, temp, start, end);					//最後，把放在「暫存柱」的所有盤全部移到「目標柱」

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


