#include <stdio.h>
#include <stdlib.h>

int* getAddress()
{
	int localVar = 6;
	return &localVar;
}


//если возвращать long, то вернется адрес переменной как число, присваиваем это число adr, теперь указатель adr указывает на место где раньше лежала локальная переменная
//если int*: происходит копирование переменной, которая лежит по адресу, на место в памяти, на которое указывает adr -> локальной переменной уже нет -> null 
int main()
{
	int *adr = getAddress();

	printf("p: %p\n", adr);
}

