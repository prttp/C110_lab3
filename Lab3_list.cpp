

#define stop __asm nop

#include "MyList.h"

void main()
{
	
	//���������: � ����� "����������� ������ (����������� ������)_2021.pdf" 

	//������� ����������� ������, ���������� ������ ������ ����
	//����������� �������, �����������:
	//1) ��������� ����  ������� ������ ���������� ����������
	//2) ��������� ������ � ������ (� ������)
	//3) ������� ���� (������, ������� ����������) ������� � �������� ��������� �� ������
	//4) ������� ��� �������� � �������� ��������� �� ������. ������� ������ ���������� 
	//   ���������� ��������� ���������
	//5) ������������� ������
	//6) ������� ����������� ���������� ������

	MyList list;
	initList(list);
	addToHead(10, list);
	addToHead(20, list);
	addToHead(50, list);
	addToHead(10, list);
	addToHead(50, list);
	addToHead(70, list);
	addToHead(30, list);
	
	printList(list);

	
	removeOne(30, list);
	printList(list);
	
	removeOne(50, list);
	printList(list);
	
	removeAll(10, list);
	printList(list);
	
	destroyList(list);
	stop
}