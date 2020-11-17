
function bool prime(int n)
{
	int i;
	for(i=2; i*i<n; i=i+1)
	{
		if(n%i == 0)
		{
			return false;
		}
	}
	return true;
}

function int main()
{
	int n;
	input(n);
	int i;
	int sum;
	sum = 0;
	for (i=2; i<n; i=i+1)
	{
	    bool t = callout prime(i);
		if(t == true)
		{
			sum = sum + i;
		}
	}
	print("Sum is: ");
	print(sum);
	print("");
	return 0;
}
