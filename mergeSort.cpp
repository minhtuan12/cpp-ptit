#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int arr1[500001], arr2[500001];

	for (int i = 0; i < n1; i++)
		arr1[i] = arr[left + i];
	for (int i = 0; i < n2; i++)
		arr2[i] = arr[mid + i + 1];

	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2)
	{
		if (arr1[i] <= arr2[j])
		{
			arr[k] = arr1[i];
			i++;
		}
		else
		{
			arr[k] = arr2[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = arr1[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = arr2[j];
		j++; 
		k++;
	}
}

void mergeSort(int arr[], int left, int right)
{
	if (left < right)
	{
		int mid = left + (right - left) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n, arr[1000000];
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		mergeSort(arr, 0, n - 1);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}