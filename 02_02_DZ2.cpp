#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	cout << "DZ_02_02\n\n" << endl;

	int dz = 0;

	while (dz < 6) {
		cout << "Введите № задания: "; cin >> dz;

		switch (dz) {

		case 1: {
			cout << "Задание № 1.\n";
			cout << "Пользователь ввоит с клавиатуры время в секундах. Необходимо написать программу, " << endl;
			cout << "которая переведет введенные пользователем секунды в часы, минуты, секунды и выводит их на экран." << endl;
			cout << endl;

			int allSeconds;
			int hour;
			int minutes;
			int seconds;

			cout << "Введите время в секундах - "; cin >> allSeconds;
			cout << endl;

			//minutes = allSeconds / 60; //5000/60=83
			//seconds = allSeconds % 60; //5000-83*60=20 остаток от деления
			//hour = minutes / 60; // 83/60=1
			//minutes = minutes % 60; // 83-1*60=23 остаток от деления

			hour = allSeconds / 3600;
			minutes = allSeconds % 3600 / 60;
			seconds = allSeconds % 3600 % 60;

			//hour = allSeconds / 3600;
			//minutes = (allSeconds - 3600)/60;
			//seconds = allSeconds - 3600-minutes*60;

			cout << allSeconds << " - это: " << hour << " час(а/ов), " << minutes << " минут(ы)," << seconds << " секунд(ы).\n" << endl;

			system("pause");
		}
			  break;

		case 2: {
			cout << "Задание № 2.\n";
			cout << "Написать программу, которая преобразует введенное с клавиатуры дробное число в денежный формат." << endl;
			cout << "Например, число 12,5 должно быть преобразовано к виду - 12 долларов и 50 центов" << endl;

			double money;
			int rub;
			int cop;

			cout << "Введите денежную сумму - "; cin >> money;
			cout << endl;

			rub = money;
			cop = (money - rub) * 100;

			cout << "Денежная сумма - " << money << " это: " << rub << " руб. и " << cop << " коп.\n";

			system("pause");
		}
			  break;

		case 3: {
			cout << "Задание № 3.\n";
			cout << "Написать программу, которая преобразует введенное пользователем количество дней в количество полных недель и оставшихся дней." << endl;
			cout << "Например, пользователь ввел 17 дней, программа должна вывести на экран 2 недели и 3 дня." << endl;

			int allDays;
			int week;
			int days;

			cout << "Введите полное количество дней - "; cin >> allDays;
			cout << endl;

			days = allDays % 7;
			week = allDays / 7;

			cout << "Полное количество дней - " << allDays << " - это: " << week << " недель(и) и " << days << "дня(ей)" << endl;

			system("pause");
		}
			  break;

		case 4: {
			cout << "Задание № 4.\n";
			cout << "Написать программу, вычисляющую, с какой скоростью бегун пробежал дистанцию." << endl;
			cout << endl;

			double distance; //дистация
			double time; // время
			double speed; //скорость
			int min_time; //минуты
			double sec_time; //секунды

			cout << "Введите длину дистанции, м - "; cin >> distance;
			cout << "Введите время, за которое бегун пробежал дистанцию (мин.сек.) - "; cin >> time;

			min_time = time;
			sec_time = (time - min_time) * 100;
			time = min_time * 60 + sec_time;
			speed = distance / time;

			cout << "Бегун пробежал дистанцию - " << distance << " метров за " << min_time << " минут и " << sec_time << " секунд " << endl;
			cout << "со скоростью - " << speed << " м/сек\n";

			system("pause");
		}
			  break;

		case 5: {
			cout << "Задание № 5.\n";
			cout << "Написать программу, которая предлагает пользователю ввести сумму денежного вклада в евро," << endl;
			cout << "а так же процент годовых, которые выплачивает банк. Определить сумму денег, выплачиваемых банком вкладчику каждый месяц." << endl;

			int deposit; // вклад
			double deposit_interest; //процент по вкладу
			int period; // кол-во месяцев 
			double percent = 0; // сумма начисленных процентов, руб
			double allPercent = 0;
			cout << "Введите сумму денежного вклада, руб. - "; cin >> deposit;
			cout << "Введите процент годовых - "; cin >> deposit_interest;
			cout << "Срок размещения, мес. - "; cin >> period;
			cout << "Процентная ставка фиксированная. Периодичность выплат - раз в месяц." << endl;

			cout << "Ваш вклад " << deposit << " рублей за " << period << " месяцев составит: \n";

			percent = deposit * deposit_interest / 12 / 100;
			for (int i = 1; i <= period; ++i)
			{
				percent = (deposit + percent) * deposit_interest / 12 / 100;

				cout << "За " << i << "-й месяц - " << percent << endl;
				allPercent += percent;
			}

			cout << "Всего за " << period << " месяцев сумма начисленных процентов составит - " << allPercent << endl;


			system("pause");
		}
			  break;

		default:
			break;
		}

		if (dz > 5) cerr << "Ошибка выбора № задания" << endl;

		system("pause");
		system("cls");
	}


	return 0;
}