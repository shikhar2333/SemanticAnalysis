function int main()
{
	int n;
	int a[10000];
	input(n);
	int i;
	for (i=0; i<n;i=i+1)
	{
		input(a[i]);
	}
	int key;
	int j;

	for (i=1; i<n; i=i+1)
	{
		key = a[i];
		j = i - 1;

		while (j >= 0 && a[j] > key)
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = key;
	}
	for(i = 0; i < n; i = i + 1)
	{  
		print(a[i]);
	}
	return 0;
}