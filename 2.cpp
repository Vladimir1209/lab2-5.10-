#include <iostream>
#include <cmath>
using namespace std;
using AB = int;
int main()
{
	pair<AB, AB> posA;
	pair<AB, AB> posB;
	int p;
	while (true)
	{
		cout << "1 - Угрожает ли ладья?\n"
			<< "2 - Угрожает ли слон?\n"
			<< "3 - Угрожает ли король?\n"
			<< "4 - Угрожает ли ферзь?\n"
			<< "5 - Попадает ли пешка в заданное поле или угрожает ему?\n"
			<< "6 - Выход\n";

		cin >> p;
		if (p == 6)break;
		cout << "Введите координаты первой фигуры" << endl;
		cin >> posA.first >> posA.second;
		cout << "Введите координаты второй фигуры" << endl;
		cin >> posB.first >> posB.second;
		if (posA.first > 8 || posA.second > 8 || posB.first > 8 || posB.second > 8)break;
		switch (p)
		{
		case 1:
			if (posB.first == posA.first || posA.second == posB.second) { cout << "Ладья угорожает второй фигуре" << endl;
			}else{ cout << "Ладья не угорожает второй фигуре" << endl;
			}
			break;
		case 2:
			if (abs(posA.first-posB.first)==abs(posA.second-posB.second)){ cout << "Слон угорожает второй фигуре" << endl;
			}else{ cout << "Слон не угорожает второй фигуре"<<endl;
			}
			break;
		case 3:
			if (abs((posA.first - posB.first)<=1 && abs(posA.second - posB.second)<=1)){ cout << "Король угорожает второй фигуре" << endl; }
			else { cout << "Король не угорожает второй фигуре"<< endl; }
			break;
		case 4:
			if ((posB.first == posA.first || posA.second == posB.second)||(abs(posA.first - posB.first) == abs(posA.second - posB.second))){ cout << "Ферзь угорожает второй фигуре1" << endl; }
			else { cout << "Ферзь не угорожает второй фигуре2" << endl; }
			break;
		case 5:
			if ((abs(posA.first-posB.first) == 1 && posA.second==posB.second)|| (abs(posA.second - posB.second) == 1 && posA.first == posB.first)){ cout << "Пешка делает простой ход1" << endl; }
			else if((abs(posA.first - posB.first) == 1 && posA.second == (posB.second -1)) || (abs(posA.second - posB.second) == 1 && posA.first == (posB.first-1))){ cout << "Пешка угрожает фигуре2" << endl; 
			}
			else { cout << "Пешка не попадает в поле" << endl; }
			break;
			
		}
	}
}
