#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");
    int sizeA, sizeB;
    cout << "����i�� ����i� ������� ������ -> "<< endl;
    cin >> sizeA;
    cout << "����i�� ����i� ������� ������ -> "<< endl;
    cin >> sizeB;
    int* arrA = new int[sizeA];
    int* arrB = new int[sizeB];
    cout << "������ ����� -> "<< endl;
    for (int x = 0; x < sizeA; x++)
    {
        arrA[x] = rand() % 9 + 1;
        cout << arrA[x] << " ";
    }
    cout << "������ ����� -> "<< endl;
    for (int x = 0; x < sizeB; x++)
    {
        arrB[x] = rand() % 9 + 1;
        cout << arrB[x] << " ";
    }

    int tmp = 0;
    for (int x = 0; x < sizeA; x++)
    {
        for (int y = 0; y < sizeB; y++)
        {
            if (arrA[x] == arrB[y])
            {
                tmp++;
            }
        }
    }

    int sizeC = tmp;
    int* arrtmp = new int[sizeC];
    tmp = 0;
    for (int y = 0; y < sizeB; y++)
    {
        for (int z = 0; z < sizeA; z++)
        {
            if (arrB[y] == arrA[z])
            {
                arrtmp[tmp] = arrB[y];
                tmp++;
            }
        }
    }

    int* arrC = new int[sizeC];
    cout << "����i� ����� -> "<< endl;
    for (int x = 0; x < sizeC; x++)
    {
        arrC[x] = arrtmp[x];
        cout << arrC[x] << " ";
    }
}