function int power(int i, int k)
{
	int res = 1;    
    while (k > 0) 
    {
        if (k & 1) 
		{
            res = res*i; 
		}
        k = k>>1; 
        i = i*i; 
    } 
    return res; 
}

function int main()
{
	int n;
	int k;
	int i;
	int sum;
	sum=0;
	input(n);
	input(k);
	for(i = 1; i<=n; i=i+1)
	{
		sum = sum + callout power(i, k);
	}
	print("The result is: ");
	print(sum);
	print("");
	return 0;
}