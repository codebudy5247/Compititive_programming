#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
	int n, i, arr[50], search, first, last, middle;
	cin>>n;
	for (i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cin>>search;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < search)
		{
			first = middle + 1;

		}
		else if(arr[middle] == search)
		{
			cout<<middle;
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"-1";
	}
	cout<<endl;
  }
  return 0;
}
