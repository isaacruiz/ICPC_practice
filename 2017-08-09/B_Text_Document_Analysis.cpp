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
		}

		if (sentence[i] = ')')
		{
			parenFlag = false;
		}

		if (!parenFlag)
		{

		}

	}

	cout << maxWordLength << " " << parenWordCount << endl;
	return 0;
}