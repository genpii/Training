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

void stack::pop()
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

	
	do {
		cin >> ch;
	} while (ch != 'q');

	return 0;
}

