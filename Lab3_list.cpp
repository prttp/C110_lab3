

#define stop __asm nop

#include "MyList.h"

void main()
{
	
	//ПОДСКАЗКИ: в файле "Односвязный список (процедурный подход)_2021.pdf" 

	//Создать односвязный список, содержащий данные целого типа
	//разработать функции, позволяющие:
	//1) Заполнять поля  ПУСТОГО списка начальными значениями
	//2) добавлять данные в список (в начало)
	//3) удалять один (первый, который встретился) элемент с заданным значением из списка
	//4) удалять все элементы с заданным значением из списка. Функция должна возвращать 
	//   количество удаленных элементов
	//5) распечатывать список
	//6) очищать динамически выделенную память

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