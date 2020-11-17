function int main()
{
	int x;
	int y;
	int z;
	int n;
	int limit;
	limit = 10000000;
	z=0;
	int m;
	m=2;
	while(z < limit)
	{
		for (n=1; n < m; n=n+1)
		{
			x = m*m - n*n;
			y = 2 * m * n;
			z = m*m + n*n;
			if (z > limit)
			{
				break;
			}
			print(x, y, z);
		}
		m = m + 1;
	}
	return 0;
}