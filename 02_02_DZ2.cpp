#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	cout << "DZ_02_02\n\n" << endl;

	int dz = 0;

	while (dz < 6) {
		cout << "������� � �������: "; cin >> dz;

		switch (dz) {

		case 1: {
			cout << "������� � 1.\n";
			cout << "������������ ����� � ���������� ����� � ��������. ���������� �������� ���������, " << endl;
			cout << "������� ��������� ��������� ������������� ������� � ����, ������, ������� � ������� �� �� �����." << endl;
			cout << endl;

			int allSeconds;
			int hour;
			int minutes;
			int seconds;

			cout << "������� ����� � �������� - "; cin >> allSeconds;
			cout << endl;

			//minutes = allSeconds / 60; //5000/60=83
			//seconds = allSeconds % 60; //5000-83*60=20 ������� �� �������
			//hour = minutes / 60; // 83/60=1
			//minutes = minutes % 60; // 83-1*60=23 ������� �� �������

			hour = allSeconds / 3600;
			minutes = allSeconds % 3600 / 60;
			seconds = allSeconds % 3600 % 60;

			//hour = allSeconds / 3600;
			//minutes = (allSeconds - 3600)/60;
			//seconds = allSeconds - 3600-minutes*60;

			cout << allSeconds << " - ���: " << hour << " ���(�/��), " << minutes << " �����(�)," << seconds << " ������(�).\n" << endl;

			system("pause");
		}
			  break;

		case 2: {
			cout << "������� � 2.\n";
			cout << "�������� ���������, ������� ����������� ��������� � ���������� ������� ����� � �������� ������." << endl;
			cout << "��������, ����� 12,5 ������ ���� ������������� � ���� - 12 �������� � 50 ������" << endl;

			double money;
			int rub;
			int cop;

			cout << "������� �������� ����� - "; cin >> money;
			cout << endl;

			rub = money;
			cop = (money - rub) * 100;

			cout << "�������� ����� - " << money << " ���: " << rub << " ���. � " << cop << " ���.\n";

			system("pause");
		}
			  break;

		case 3: {
			cout << "������� � 3.\n";
			cout << "�������� ���������, ������� ����������� ��������� ������������� ���������� ���� � ���������� ������ ������ � ���������� ����." << endl;
			cout << "��������, ������������ ���� 17 ����, ��������� ������ ������� �� ����� 2 ������ � 3 ���." << endl;

			int allDays;
			int week;
			int days;

			cout << "������� ������ ���������� ���� - "; cin >> allDays;
			cout << endl;

			days = allDays % 7;
			week = allDays / 7;

			cout << "������ ���������� ���� - " << allDays << " - ���: " << week << " ������(�) � " << days << "���(��)" << endl;

			system("pause");
		}
			  break;

		case 4: {
			cout << "������� � 4.\n";
			cout << "�������� ���������, �����������, � ����� ��������� ����� �������� ���������." << endl;
			cout << endl;

			double distance; //��������
			double time; // �����
			double speed; //��������
			int min_time; //������
			double sec_time; //�������

			cout << "������� ����� ���������, � - "; cin >> distance;
			cout << "������� �����, �� ������� ����� �������� ��������� (���.���.) - "; cin >> time;

			min_time = time;
			sec_time = (time - min_time) * 100;
			time = min_time * 60 + sec_time;
			speed = distance / time;

			cout << "����� �������� ��������� - " << distance << " ������ �� " << min_time << " ����� � " << sec_time << " ������ " << endl;
			cout << "�� ��������� - " << speed << " �/���\n";

			system("pause");
		}
			  break;

		case 5: {
			cout << "������� � 5.\n";
			cout << "�������� ���������, ������� ���������� ������������ ������ ����� ��������� ������ � ����," << endl;
			cout << "� ��� �� ������� �������, ������� ����������� ����. ���������� ����� �����, ������������� ������ ��������� ������ �����." << endl;

			int deposit; // �����
			double deposit_interest; //������� �� ������
			int period; // ���-�� ������� 
			double percent = 0; // ����� ����������� ���������, ���
			double allPercent = 0;
			cout << "������� ����� ��������� ������, ���. - "; cin >> deposit;
			cout << "������� ������� ������� - "; cin >> deposit_interest;
			cout << "���� ����������, ���. - "; cin >> period;
			cout << "���������� ������ �������������. ������������� ������ - ��� � �����." << endl;

			cout << "��� ����� " << deposit << " ������ �� " << period << " ������� ��������: \n";

			percent = deposit * deposit_interest / 12 / 100;
			for (int i = 1; i <= period; ++i)
			{
				percent = (deposit + percent) * deposit_interest / 12 / 100;

				cout << "�� " << i << "-� ����� - " << percent << endl;
				allPercent += percent;
			}

			cout << "����� �� " << period << " ������� ����� ����������� ��������� �������� - " << allPercent << endl;


			system("pause");
		}
			  break;

		default:
			break;
		}

		if (dz > 5) cerr << "������ ������ � �������" << endl;

		system("pause");
		system("cls");
	}


	return 0;
}