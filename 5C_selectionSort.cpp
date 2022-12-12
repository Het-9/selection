#include <iostream>
using namespace std;

void swap(int *a, int x, int y)
{
	int temp;
	temp = a[x];
	a[x] = a[y];
	a[y] = temp; 
}

void selectionSort(int *a,int n)
{
	int min;
	for(int i=0;i<n-1;i++)
	{	
		min = i;
		for(int j=i;j<n;j++)
		{
			if(a[j] < a[min])
			{
			    min=j;
			}
		}
		swap(a,min,i);
	}
}

int main()
{
	int *arr, n;

	cout<<"Enter the number of elements in array: ";
	cin>>n;

	arr = new int(n);

	cout<<"Enter "<<n<<" elements(integer): ";
	for(int i=0;i<n;i++)
		cin>>arr[i]; 

	selectionSort(arr, n);

	cout << "Sorted array is: ";
	for(int i=0;i<n;i++)
		cout << arr[i]<<" ";

	cout << endl; 
}