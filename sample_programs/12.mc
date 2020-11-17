char word[101];
char uniq[1000][101];

function bool isUnique(int numWords)
{
	int i;
	int j;
	for(i=0; i<numWords; i=i+1)
	{	
		j = 0;
		bool match = true;
		while(uniq[i][j] != '\0' && word[j] != '\0')
		{
			if (uniq[i][j] != word[j])
			{
				match = false;
			}
			++j;
		}
		if (uniq[i][j] != '\0' || word[j] != '\0')
		{
			match = false;
		}

		if (match)
		{
			return false;
		}
	}
	return true;

}

function int main()
{
	char filename[100];
	char contents[100010];
	char c;
	print("Enter file name: ");
	int i;
	i = 0;
	while(true)
	{
		input(c);
		if (c == '\n')
		{
			break;
		}
		filename[i] = c;
		++i;
	}
	filename[i] = '\0';
	readfile(filename, contents);
	
	int len;
	int wordNo;
	len = 0;
	wordNo = 0;
	i = 0;
	c = contents[i];
	while(c != '\0')
	{
		if (c == ' ')
		{
			if(len > 0 && callout isUnique(wordNo))
			{
				for(i=0; i<len; i=i+1)
				{
					uniq[wordNo][i] = word[i];
				}
				uniq[wordNo][len] = '\0';
				len = 0;
				++wordNo;
			}
		}
		else
		{
			word[len] = c;
			++len;
		}
		++i;
		c = contents[i];
	}

	int j;
	for(i=0; i<wordNo; i=i+1)
	{	
		j = 0;
		c = uniq[i][j];
		while(c != '\0')
		{
			print("%d", c);
			++j;
			c = uniq[i][j];
		}
		print("\n");
	}

	return 0;
}