#include <iostream>
using namespace std;

string randomizer(string str)
{
	string result = str;
	char save = 0;
	for (int i = 0; i < str.length(); i++)
	{
		int random_value1 = rand() % (result.length() - 1);
		int random_value2 = rand() % (result.length() - 1);

		if (save == result[random_value1])
			continue;

		save = result[random_value1];

		result[random_value1] = result[random_value2];
	}
	return result;
}

string removeConsonants(string str)
{
	string result = { };
	string consonants = "qwrtpsdfghjklzxcvbnm";
	for (int i = 0; i < sizeof(consonants); i++)
	{
		for (int k = 0; k < str.length(); k++)
		{
			if (str[k] == consonants[i])
				str[k] = 0;

			continue;
		}
	}
	result = str;
	return result;
}

string removeVowels(string str)
{
	string result = { };
	string vowels = "eyuoia";
	for (int i = 0; i < sizeof(vowels); i++)
	{
		for (int k = 0; k < str.length(); k++)
		{
			if (str[k] == vowels[i])
				str[k] = 0;
			
			continue;
		}
	}
	result = str;
	return result;
}

string reverse(string str)
{
	string result = { };
	for (int i = str.length(); i >= 0; i--)
	{
		result += str[i];
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	std::srand(std::time(nullptr)); 
	cout << "1 - Реверс \n2 - Удаление гласных \n3 - Удаление согласных \n4 - Рандомно раскидать буквы\n";
	int var;
	cin >> var;
	string str;
	cin >> str;
	switch (var)
	{
	case 1:
		cout << reverse(str);
		break;
	case 2:
		cout << removeVowels(str);
		break;
	case 3:
		cout << removeConsonants(str);
		break;
	case 4:
		cout << randomizer(str);
		break;
	default:
		break;
	}
}