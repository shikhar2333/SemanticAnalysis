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
	
	int hist[26];
	for(i=0; i<26; i=i+1)
	{
		hist[i] = 0;
	}
	i = 0;
	c = contents[i];
	while(c != '\0')
	{
		int index;
		index = c - 'a';
		++hist[index];
		++i;
		c = contents[i];
	}
	for(i=0; i<26; i=i+1)
	{
		c = i + 'a';
		print("%c : %d\n", c, hist[i]);
	}
	return 0;
}