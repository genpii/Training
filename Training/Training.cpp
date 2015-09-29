// Training.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#define SIZE 10

// �ۑ��p�N���X
class stack {
	char stck[SIZE]; // �X�^�b�N�̈���m��
	int tos; // �X�^�b�N�擪�̍���
public:
	void init(); // ������
	void push(char ch); // �v�b�V��
	char pop(); // �|�b�v
};

void stack::init()
{
	tos = 0;
}

void stack::push(char ch)
{
	if (tos == SIZE){
		cout << "�X�^�b�N�͈�t�ł�";
		return;
	}
	stck[tos] = ch;
	tos++;
}

char stack::pop()
{
	if (tos == 0){
		cout << "�X�^�b�N�͋�ł�";
		return 0; // ���NULL
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

	// q �ŏI��
	do {
		cin >> ch;
	} while (ch != 'q');

	return 0;
}

