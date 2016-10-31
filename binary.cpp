//code for Binary search in cpp
#include <iostream>
using namespace std;
int Binary_Search(int arr[], int size, int desired)
{
	int left = 0, right = size - 1, middle;
	while(left<=right)
	{
		middle = left + (right - left) / 2;
		if(arr[middle] == desired)
			return middle;
		else if(desired < arr[middle])
			right = middle - 1;
		else if(desired > arr[middle])
			left = middle + 1;
	}

	return -1;
}
int main()
{
	int arr[10005],n,k;
	cin>>n;
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Number to be searched:";
	cin>>k;
	if(Binary_Search(arr, n, k) != -1)
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;
	return 0;
}
