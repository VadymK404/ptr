//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//
//void Random(int *arr,int size);//prototype
//void Maxim(int* arr, int size);
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	srand(time(0));
//	const int size = 7;
//	int arr[size];
//	cout << "заповнення масиву випадковими числами ";
//	Random(arr, size);
//	cout << "\n Maxi num ";
//	Maxim(arr,size);
////	return 0;
//	
//}
//void Random(int* arr, int size) {
//	short i;
//	for (i = 0; i < 7; i++) {
//		*(arr + i) = -10+rand() % (10+10+1 );//int num = min + rand() % (max - min + 1);
//		cout << *(arr + i) << ' ';
//	}
//}
//void Maxim(int* arr, int size) {
//	short i;
//	int max = *arr;
//	int index = 0;
//	for (i = 1; i < size; i++) {
//		if (max < *(arr + i)) {
//			max = *(arr + i);
//			index = i;
//		}
//	}
//	cout << max<<endl;
//	arr[index] = 0;
//}
