function int main()
{
	int n;
	input(n);
	int i;
	bool flag;
	flag = true;
	for(i=2; i*i<=n; i=i+1)
	{
		if(n%i == 0)
		{
			flag = false;
			break;
		}
	}
	if (flag == true)
	{
		print("Prime number");
	}
	else
	{
		print("not a prime number");
	}
	return 0;
}