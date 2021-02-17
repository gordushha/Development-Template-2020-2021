#include "roman.h"

arabic Convertor::toArabic(roman r)
{
	std::map<char, int> m
	{
		{'I', 1},
		{'V', 5},
		{'X', 10},

	};
	arabic result{ 0 };
	for (int i = 0; i < r.value.length() - 1; i++)
	{
		if (m[r.value[i]] < m[r.value[static_cast<unsigned __int64>(i) + 1]])
			result.value -= m[r.value[i]];
		else if (m[r.value[i]] >= m[r.value[static_cast<unsigned __int64>(i) + 1]])
			result.value += m[r.value[i]];
	}

	result.value += m[r.value[r.value.length() - 1]];

	return result;
}



roman Convertor::toRoman(arabic a)
{
	std::map <int, std::string> symbol =
	{
		{10, "X"},
		{9, "IX"},
		{5, "V"},
		{4, "IV"},
		{1, "I"}
	};

	int levels[] = {10, 9, 5, 4, 1 };

	std::string result = std::string();

	for (const int& level : levels)
	{
		if (a.value >= level)
		{
			do
			{
				result += symbol[level];
				a.value -= level;
			} while (a.value >= level);
		}
	}
	return roman{ result };
}

