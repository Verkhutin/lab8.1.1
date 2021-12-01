#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int ThirdComma(char* s) {
	int comma = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == ',')
			comma++;
		if (comma == 3)
			return i;
	}
}

char* InsertAfter(char* s, const char c1, const char c2)
{
	char* d = new char[2 * strlen(s) + 1];
	char* t = d;
	for (int i = 0; s[i] != '\0'; i++)
	{
		*t++ = s[i];
		if (s[i] == c1)
			*t++ = c2;
	}
	*t = '\0';
	strcpy(s, d);
	return s;
}

char *Change(char *s, const char c2) {
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == ',')
			s[i] = c2;
	}
	return s;
}

int main()
{
	char s[101];
	
	char c1 = ',';
	char c2 = '*';
	cout << "Enter string:" << endl;
	cin.getline(s, 100);
	cout << "Index of third comma in the row = " << ThirdComma(s) << endl;
	cout << "After change:" << endl;
	InsertAfter(s, c1, c2);
	cout << Change(s, c2) << endl;
	return 0;
}