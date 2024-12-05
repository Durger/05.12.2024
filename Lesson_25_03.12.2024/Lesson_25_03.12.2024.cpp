
#include <iostream>
using namespace std;

//Урок 16-3.3. Оператор sizeof

//Размеры структуры
//struct Test
//{
//	char c;
//	int i;
//};

//Урок.16-4
//Создать структуру ВИДЕОМАГАЗИН
struct VideoShop {
	char nameFilm[250], director[250], filmGenre[250];
	double popularityRating;
	double coastDisk;
};
void ShowFilm(VideoShop films) {
	cout << "\nMovie_title: " << films.nameFilm << "\nDirector: " << films.director << "\nGenre: " << films.filmGenre << "\nPopularity_rating: " << films.popularityRating << "\nDisc_price: " << films.coastDisk << endl;
}
void SearchFilmGenre(VideoShop* film, int sizefilm, char* nameFilm) {          //Поиск по названию;
	bool temp = false;
	int temp2 = 0;
		for (int i = 0; i < sizefilm; i++) {
			if ((strcmp(film[i].nameFilm, nameFilm)) == 0) {
				temp = true;
				temp2 = i;
			}
			
		}
		if (temp == true) {
			ShowFilm(film[temp2]);
		}
		else { cout << "\nthis is not films\n"; }

}

//(VIDEO_STORE* films, int sizeFilms, char* nameFilme) {
//	for (int i = 0; i < sizeFilms; i++) {
//		if (strcmp(films[i].Movie_title, nameFilme) == 0) {
//			ShowFilm(films[i]);
//		}
//		else {
//			cout << "\nЭто не тот фильм\n";
//		}
//	}
//}




int main()
{
	system("chcp 1251");
	//Урок 16-3.3. Оператор sizeof
	//int a;
	//char b;
	//double c;
	//int* p;
	//cout << "sizeof(a)=" << sizeof(a) << "\n";  //Показывает размер в байтах
	//cout << "sizeof(b)=" << sizeof(b) << "\n";
	//cout << "sizeof(c)=" << sizeof(c) << "\n";
	//cout << "sizeof(p)=" << sizeof(p) << "\n";
	//cout << "sizeof(int)=" << sizeof(int) << "\n";
	//cout << "sizeof(int *)=" << sizeof(int*) << "\n";
	//return 0;

	//Размеры структуры
	/*Test d = { '#',78 };
	cout << sizeof(Test) << " " << sizeof(d) << "\n\n";
	return 0;*/


	//Урок.16-4
	//Создать структуру ВИДЕОМАГАЗИН со следующими полями:
	//■ Название фильма;
	//■ Режиссер;
	//■ Жанр;
	//■ Рейтинг популярности;
	//■ Цена диска.
		//Реализовать следующие возможности :
	//■ Поиск по названию;
	//■ Поиск по жанру;
	//■ Поиск по режиссеру;
	//■ Самый популярный фильм в жанре;
	//■ Показ всех записей и добавление.
		//Для реализации задачи используйте функции.Объекты структуры можно передавать в функцию целиком или
		//отдельными полями.Выберите верный механизм передачи в каждом конкретном случае.
	
	VideoShop films[5];
	films[0]={ "Lock, Stock and Two Smoking Barrels", "Guy Ritchie", "Criminal comedy", 8.1, 100 };
	films[1] = { "Snatch", "Guy Ritchie", "Criminal comedy", 8.2, 100 };
	films[2] = { "Reservoir Dogs", "Quentin Tarantino", "Criminal drama", 8.3, 90 };
	films[3] = { "Pulp Fiction", "Quentin Tarantino", "Criminal comedy", 8.9, 95 };
	films[4] = { "Once Upon a Time in America", "Sergio Leone", "Criminal drama", 8.3, 100 };
	char nameFilm[250] = { "Lock, Stock and Two Smoking Barrels" };
	SearchFilmGenre(films, 5, nameFilm);
	//cout << "Hello!! This is a system for search movie by the following criteria: \n name\n director\n Genre\n Popularity Rating\n Coast Disk\n";
	//cout << "Please enter: name movie\n ";
	//char FindFilmGenre;
	//cin >> FindFilmGenre;
	//cout << "Please enter: name movie\n ";
	//cout << "Please enter: name movie\n ";
	//cout << "Please enter: name movie\n ";




}
