// Training.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#define SIZE 10

// 保存用クラス
class stack {
	char stck[SIZE]; // スタック領域を確保
	int tos; // スタック先頭の索引
public:
	void init(); // 初期化
	void push(char ch); // プッシュ
	char pop(); // ポップ
};

void stack::init()
{
	tos = 0;
}

void stack::push(char ch)
{
	if (tos == SIZE){
		cout << "スタックは一杯です";
		return;
	}
	stck[tos] = ch;
	tos++;
}

void stack::pop()
{
	if (tos == 0){
		cout << "スタックは空です";
		return 0; // 空でNULL
	}
	tos--;
	return stck[tos];
}

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;
	stack s1, s2;

	
	do {
		cin >> ch;
	} while (ch != 'q');

	return 0;
}

