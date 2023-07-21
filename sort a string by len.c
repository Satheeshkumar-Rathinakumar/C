#include<stdio.h>
#include<string.h>

sort(string s[], int n)
{
	for (int i=1 ;i<n; i++)
	{
		string temp = s[i];
		int j = i - 1;
		while (j >= 0 && temp.length() < s[j].length())
		{
			s[j+1] = s[j];
			j--;
		}
		s[j+1] = temp;
	}
	return s;
}
int main()
{
	string arr[];
	gets(arr);
	int n = sizeof(arr)/sizeof(arr[0]);
	string arr1[n]=sort(arr, n);
    puts(arr1);
	return 0;
}
