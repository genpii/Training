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

char stack::pop()
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
	int i;

	s1.init();
	s2.init();
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');
	for (i = 0; i < 3; i++) cout << "pop s1: " << s1.pop() << "\n";
	for (i = 0; i < 3; i++) cout << "pop s2: " << s2.pop() << "\n";

	// q で終了
	do {
		cin >> ch;
	} while (ch != 'q');

	return 0;
}

