#include <iostream>
using namespace std;

//void main()
//{
//    setlocale(LC_ALL, "rus");
//     int sizeA, sizeB;
//     cout << "����i�� ����i� ������� ������ -> "<< endl;
//     cin >> sizeA;
//     cout << "����i�� ����i� ������� ������ -> "<< endl;
//     cin >> sizeB;
//     int* arrA = new int[sizeA];
//     int* arrB = new int[sizeB];
//     cout << "������ ����� -> "<< endl;
//     for (int x = 0; x < sizeA; x++)
//     {
//         arrA[x] = rand() % 9 + 1;
//         cout << arrA[x] << " ";
//     }
//     cout << "������ ����� -> "<< endl;
//     for (int x = 0; x < sizeB; x++)
//     {
//         arrB[x] = rand() % 9 + 1;
//         cout << arrB[x] << " ";
//     }
//
//     int tmp = 0;
//     for (int x = 0; x < sizeA; x++)
//     {
//         for (int y = 0; y < sizeB; y++)
//         {
//             if (arrA[x] == arrB[y])
//             {
//                 tmp++;
//             }
//         }
//     }
//
//     int sizeC = tmp;
//     int* arrtmp = new int[sizeC];
//     tmp = 0;
//     for (int y = 0; y < sizeB; y++)
//     {
//         for (int z = 0; z < sizeA; z++)
//         {
//             if (arrB[y] == arrA[z])
//             {
//                 arrtmp[tmp] = arrB[y];
//                 tmp++;
//             }
//         }
//     }
//
//     int* arrC = new int[sizeC];
//     cout << "����i� ����� -> "<< endl;
//     for (int x = 0; x < sizeC; x++)
//     {
//         arrC[x] = arrtmp[x];
//         cout << arrC[x] << " ";
//     }
//}

int main()
{
    setlocale(LC_ALL, "rus");
    int M;
    cout << "����i�� ����i� ����� -> ";
    cin >> M;
    int* a = new int[M];

    cout << "����i�� �������� ������ -> ";
    for (int i = 0; i < M; i++)
    {
        cin >> a[i];
    }

    while (true)
    {
        int n;
        cout << "����:" << endl;
        cout << "1 - �������� ����i �������� ������ " << endl;
        cout << "2 - �������� ������i �������� ������ " << endl;
        cout << "3 - ������� �������� ����� " << endl;
        cout << "4 - ���i� " << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            for (int i = 0; i < M; i++)
            {
                if (a[i] % 2 == 0)
                {
                    for (int j = i; j < M - 1; j++)
                    {
                        a[j] = a[j + 1];
                    }
                    M--;
                    i--;
                }
            }
        } break;
        case 2:
        {
            for (int i = 0; i < M; i++)
            {
                if (!(a[i] % 2 == 0))
                {
                    for (int j = i; j < M - 1; j++)
                    {
                        a[j] = a[j + 1];
                    }
                    M--;
                    i--;
                }
            }
        } break;
        case 3:
        {
            cout << "�����:";
            for (int i = 0; i < M; i++)
            {
                cout << a[i] << " ";
            }
        } break;

        case 4:
        {
            delete[] a;
            return 0;
        } break;
        default:
        {
            cout << "!!!Error!!!  ������ ������ �� i���!" << endl;
        }
        }
    }
}