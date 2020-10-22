


#include<iostream>
using namespace std;
int main()
{
	{
		int sutunNumarasi;
		int satirNumarasi;
		int i, j;

		while (true)
		{

			while (true)
			{
				cout << "satir numarasini giriniz:";
				cin >> satirNumarasi;
				//satır numarası 5'e eşit,5'ten büyük ve 15'e eşit,15'ten küçük olmalıdır.
				if (satirNumarasi >= 5 && satirNumarasi <= 15)
				{
					break;
				}
				else {
					cout << "satir numarasi hatali....Tekrar deneyiniz...." << endl;
				}
			}

			while (true)
			{
				cout << "sutun numarasini giriniz:";
				cin >> sutunNumarasi;

				//sütun numarası 5'e eşit,5'ten büyük ve 40'a eşit,40'tan küçük olmalıdır.
				if (sutunNumarasi >= 5 && sutunNumarasi <= 40)
				{
					//sütun numarası satır numarasının 2 katı olmalıdır. 
					if (sutunNumarasi == 2 * satirNumarasi)
					{
						break;
					}


					else
					{
						cout << "sutun numarasi satir numarasinin iki kati olmalidir....Tekrar deneyiniz...." << endl;
					}
				}

				else
				{
					cout << "sutun numarasi hatali....Tekrar deneyiniz...." << endl;
				}

			}


			//Döngü satır numarasının iki katı oluncaya kadar 1.şeklin üst satırında * oluşturur.
			for (int i = 0; i < (satirNumarasi * 2); i++)
			{
				cout << "*";
			}
			cout << endl;


			for (int i = satirNumarasi - 2; i >= 1; i--)
			{
				cout << "*";


				for (int j = 1; j < i; j++)
				{
					cout << " ";
				}
				cout << "*";


				for (int j = satirNumarasi - 2; j >= i; j--)
				{
					cout << " ";
				}

				for (int j = satirNumarasi - 2; j >= i; j--)
				{
					cout << " ";
				}
				cout << "*";


				for (int j = 1; j < i; j++)
				{
					cout << " ";
				}
				cout << "*";

				cout << endl;
			}

			//Döngü satır numarasının 2 katı oluncaya kadar 1.şeklin alt satırında * oluşturur
			for (int i = 0; i < (satirNumarasi * 2); i++)
			{
				cout << "*";
			}
			cout << endl;

			//Döngü satır numarasının 2 katı oluncaya kadar 2.şeklin üst satırında * oluşturur.
			for (int i = 0; i < (satirNumarasi * 2); i++)
			{
				cout << "*";
			}
			cout << endl;

			for (int i = satirNumarasi - 2; i >= 1; i--)
			{

				cout << "*";
				for (int j = satirNumarasi - 2; j > i; j--)
				{
					cout << " ";
				}
				cout << "*";

				for (int j = 1; j <= i; j++)
				{
					cout << " ";
				}

				for (int j = 1; j <= i; j++)
				{
					cout << " ";
				}
				cout << "*";

				for (int j = satirNumarasi - 2; j > i; j--)
				{
					cout << " ";
				}

				cout << "*";

				cout << endl;
			}
			//Döngü satır numarasının 2 katı oluncaya kadar 2.şeklin satırında * oluşturur.
			for (int i = 0; i < (satirNumarasi * 2); i++)
			{
				cout << "*";
			}
			return 0;
		}
	}
}

