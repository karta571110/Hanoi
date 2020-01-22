// 河內塔.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

using namespace std;


int time = 0;
void HaTower(int num, char start, char temp, char end)
{
	if (num>0) 
	{
		HaTower(num-1,start,end,temp );						//先把 n-1 個盤全部移到 「暫存柱」
		cout << num << ends << start << "->" << end<<endl; //再把 第 n 個盤 移動到 「目標柱」
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

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
