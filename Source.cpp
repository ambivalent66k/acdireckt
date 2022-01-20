#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    setlocale(0, "rus");
    try
    {
        string N, K, L;
        cout << "Введите длину массива N=\n";
        cin >> N;
        cout << "Введите K\n";
        cin >> K;
        cout << "Введите L\n";
        cin >> L;
        if ((stoi(N) > 1) and (stoi(K) < stoi(L)) and (stoi(L) < stoi(N)) and (stoi(K) >= 0))
        {
            //enter A
            string* A = new string[stoi(N)];
            cout << "Введите Элементы массива\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

            //finding...
            double sum = 0;
            int num = 0;
            for (int i = stoi(K) - 1; i <= stoi(L) - 1; i++)
            {
                sum = sum + stod(A[i]);
                num++;
            }
            double ar_mean = sum / num;

            //output
            cout << "Среднее арифметическое элементов массива " << ar_mean << endl;
            delete[] A;
        }
        else
        {
            cout << "\nIncorrect data\n\n";
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Second()
{
    setlocale(0, "rus");
    try
    {
        string N;
        cout << "Введите длину массива N=\n";
        cin >> N;
        if (stoi(N) > 1)
        {
            //enter A
            string* A = new string[stoi(N)];
            cout << "Введите элементы массива\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

            //finding...
            double sum = 0;
            int num = 0;
            double* D = new double[stoi(N)]; //array of differance
            for (int i = 0; i < stoi(N) - 1; i++)
            {
                D[i] = stod(A[i + 1]) - stod(A[i]);
            }
            bool achtung = true;
            for (int i = 0; i < stoi(N); i++)
            {
                if (D[i] != D[i + 1])
                {
                    achtung = false;
                }
            }

            //output
            if (achtung == false)
            {
                cout << "\n0\n";
            }
            else
            {
                cout << endl << D[1] << endl;
            }


            delete[] A;
            delete[] D;
        }
        else
        {
            cout << "\nIncorrect data\n\n";
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Third()
{
    setlocale(0, "rus");
    try
    {
        string N;
        cout << "Введите длину массива N=\n";
        cin >> N;
        if (stoi(N) > 1)
        {
            //enter A
            string* A = new string[stoi(N)];
            cout << "Введите элементы массива\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

            //finding...
            double min = 1000000;
            for (int i = 1; i < stoi(N); i += 2)
            {
                if (stod(A[i]) < min)
                {
                    min = stod(A[i]);
                }
            }

            //output
            cout << "минимальный элемент с четным номером " << min << endl;


            delete[] A;
        }
        else
        {
            cout << "\nIncorrect data\n\n";
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Fourth()
{
    setlocale(0, "rus");
    try
    {
        string N;
        cout << "Введите длину массива N=\n";
        cin >> N;
        if (stoi(N) > 1)
        {
            //enter A
            string* A = new string[stoi(N)];
            cout << "Введите элементы массива\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

            //finding...
            int index = -1;
            if (stod(A[0]) > stod(A[1]))
            {
                index = 0;
            }
            for (int i = 1; i < stoi(N) - 1; i++)
            {
                if ((stod(A[i]) > stod(A[i - 1])) and (stod(A[i]) > stod(A[i + 1])))
                {
                    index = i;
                }
            }
            if (stod(A[stoi(N) - 1]) > stod(A[stoi(N) - 2]))
            {
                index = stoi(N);
            }


            //output
            if (index >= 0)
            {
                cout << "Последний локальный максимум:" << index  << endl;
            }
            else
            {
                cout << "Нет локльного максимума\n";
            }

            delete[] A;
        }
        else
        {
            cout << "\nIncorrect data\n\n";
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Fifth()
{
    setlocale(0, "rus");
    try
    {
        string N;
        cout << "Введите длину массива N=\n";
        cin >> N;
        if (stoi(N) > 1)
        {
            //enter A
            string* A = new string[stoi(N)];
            cout << "Введите элементы массива:\n";
            for (int i = 0; i < stoi(N); i++)
            {
                cin >> A[i];
            }

            //copy in B
            string* B = new string[stoi(N)];
            for (int i = 0; i < stoi(N); i++)
            {
                B[i] = A[i];
            }



            //sort
            for (int i = 0; i < stoi(N); i++) {
                for (int j = 0; j < stoi(N) - 1; j++) {
                    if (stod(A[j]) > stod(A[j + 1])) {
                        double a = stod(A[j]);
                        A[j] = A[j + 1];
                        A[j + 1] = to_string(a);
                    }
                }
            }

            //finding...
            double target = -100000000;
            for (int i = 0; i < stoi(N) - 1; i++)
            {
                if (stod(A[i]) == stod(A[i + 1]))
                {
                    target = stod(A[i]);
                }
            }

            if (target != -100000000)
            {
                cout << "Номера одинаковых элементов\n";
            }
            for (int i = 0; i < stoi(N); i++)
            {
                if (target == stod(B[i]))
                {
                    cout << i + 1 << endl;
                }
            }

            //output


            delete[] A;
            delete[] B;
        }
        else
        {
            cout << "\nIncorrect data\n\n";
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}

void Error()
{
    cout << "incorrect number\n" << endl;
}

int main()
{
    while (true) {
        setlocale(0, "rus");

        int ExNum;
        cout << "  Выберите номер упражнений (введите 0 для выхода)\n"
            << "   1) Дан массив размера N и целые числа K и L (1 <= K <= L <= N). Найти среднее арифметическое элементов массива с номерами от K до L включительно.\n"
            << "   2) Дан целочисленный массив размера N, не содержащий одинаковых чисел. Проверить, образуют ли его элементы арифметическую прогрессию. Если образуют, то вывести разность прогрессии, если нет — вывести 0.\n"
            << "   3) Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами: A2, A4, A6,\n"
            << "   4) Дан массив размера N. Найти номер его последнего локального максимума (локальный максимум — это элемент, который больше любого из своих соседей).\n"
            << "   5) Дан целочисленный массив размера N, содержащий ровно два одинаковых элемента. Найти номера одинаковых элементов и вывести эти номера в порядке возрастания\n";
        cin >> ExNum;
        if (ExNum == 1)
        {
            First();
        }
        else if (ExNum == 2)
        {
            Second();
        }
        else if (ExNum == 3)
        {
            Third();
        }
        else if (ExNum == 4)
        {
            Fourth();
        }
        else if (ExNum == 5)
        {
            Fifth();
        }
        else if (ExNum == 0)
        {
            break;
        }
        else
        {
            Error();
        }

    }
    return 0;
}