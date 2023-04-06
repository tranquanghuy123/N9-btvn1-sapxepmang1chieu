#include <iostream>
using namespace std;
// Tổng số phần tử là 1000
#define MAX 1000
//Ham nhap mang
void NhapMang(int a[], int n)
{
	cout << "Nhap so luong phan tu: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
	}
}
// Ham Xuat
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++) 
	{
		cout << "a[" << i << "] =" << a[i] << endl;
	}
}
//Ham hoan vi
void Hoanvi(int& a, int& b)
{
	int c = a;
	int a = b;
	int b = c;
}

// Ham sắp xếp mảng tăng dần interchange sort
void SapXepTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (a[i] < a[j])
			{
				Hoanvi(a[i], a[j]);
			}
		}
	}
}
int main()
{
	int array[MAX];
	// Số phần tử thực tế
	int n;

	NhapMang(array, n);
	XuatMang(array, n);
	SapXepTang(array, n);

	return 0;
}