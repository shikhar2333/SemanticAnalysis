function int main()
{
	int a[1000][1000];
	int b[1000][1000];
	int ans[1000][1000];
	int m;
	int n;
	print("Enter Dimensions:");
	input(m);
	input(n);
	int i;
	int j;
	
	print("Enter matrix 1:");
	for (i=0; i<m; i=i+1)
	{
		for(j=0; j<n; j=j+1)
		{
			input(a[i][j]);
		}
	}

	print("Enter matrix 2:");
	for (i=0; i<m; i=i+1)
	{
		for(j=0; j<n; j=j+1)
		{
			input(b[i][j]);
		}
	}

	for (i=0; i<m; i=i+1)
	{
		for(j=0; j<n; j=j+1)
		{
			ans[i][j] = a[i][j] + b[i][j];
		}
	}

	print("Sum of matrices:");
	for (i=0; i<m; i=i+1)
	{
		for(j=0; j<n; j=j+1)
		{
			print(ans[i][j]);
		}
		print("");
	}
	return 0;
}