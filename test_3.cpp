#include<iostream>
#include<string>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
	string str = "";
	char result[10] = { 0 };
	long long num = 0;
	int i = 0;
	int temp = 0;
	string elem[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

	cin >> str;


	while (i < str.size())
		{
			num += (str[i] - '0');
			i++;
		}
	sprintf(result, "%d", num);

	cout << elem[result[0] - '0'];
	for (int i = 1; result[i] != '\0'; i++)
		{
			cout <<" "<< elem[result[i] - '0'];
		}

	return 0;
}
