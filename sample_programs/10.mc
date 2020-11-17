function int main()
{
	int a[100][100];
	int b[100][100];
	int ans[100][100];
	int m1;
	int n1;
	int m2;
	int n2;
	print("Enter Dimensions of matrix 1:");
	input(m1);
	input(n1);
	print("Enter Dimensions of matrix 2:");
	input(m2);
	input(n2);
	int i;
	int j;
	int k;
	if (m2 != n1)
	{
		print("Invalid dimensions");
		return 0;
	}
	print("Enter matrix 1:");
	for (i=0; i<m1; i=i+1)
	{
		for(j=0; j<n1; j=j+1)
		{
			input(a[i][j]);
		}
	}

	print("Enter matrix 2:");
	for (i=0; i<m2; i=i+1)
	{
		for(j=0; j<n2; j=j+1)
		{
			input(b[i][j]);
		}
	}

	for (i=0; i<m1; i=i+1)
	{
		for(j=0; j<n2; j=j+1)
		{
			int sum;
			sum = 0;
			for(k=0; k<n1; k=k+1)
			{
				sum = sum + a[i][k] * b[k][j];
			}
			ans[i][j] = sum;
		}
	}

	print("Product of matrices:");
	for (i=0; i<m1; i=i+1)
	{
		for(j=0; j<n2; j=j+1)
		{
			print(ans[i][j]);
		}
		print("");
	}
	return 0;
}