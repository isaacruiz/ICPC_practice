#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence;
	int sentenceLength;
	int parenWordCount = 0;
	int maxWordLength = 0;
	int charCount = 0;
	bool parenFlag = false;

	cin >> sentenceLength >> sentence;

	for (int i = 0; i < sentenceLength; ++i)
	{
		if (sentence[i] == '(')
		{
			parenFlag = true;
			charCount = 0;
		}

		if (parenFlag)
			if (sentence[i] == '_' || sentence[i] == ')')
				if (sentence[i - 1] != '_' && sentence[i - 1] != '(')
					parenWordCount++;

		if (sentence[i] == ')')
			parenFlag = false;

		if (!parenFlag)
		{
			if (sentence[i] == '_' || sentence[i] == ')')
				charCount = 0;
			else
				charCount++;
			
			if (charCount > maxWordLength)
				maxWordLength = charCount;
		}
	}

	cout << maxWordLength << " " << parenWordCount << endl;
	return 0;
}