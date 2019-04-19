#include "pch.h"
#include <iostream>
#include "conio.h"
#include "Heros.h"
using namespace std;

int main()
{
	cout << "Le code fonctionne !" << endl;
	Heros bob("!", 2, 2);
	for (;;) {
		bob.deplacer();
	}
}
