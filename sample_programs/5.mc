int arr[50];
function int permute (int left, int right, int n)
{
	int i;
	int temp;
	if (left != right)
	{
		for (i=left;i<=right;i=i+1)
		{
			temp = a[left];
			a[left] = a[i];
			a[i] = temp;

			callout permute (left+1, right, n);

			temp = a[left];
			a[left] = a[i];
			a[i] = temp;
		}
	}
	else
	{
		for(i=1;i<=n;i=i+1)
		{	
			print(arr[i]);
		}
		print("");
	}
}
function int main()
{
	int i;
	input(n);
	for (i=1; i<=n; i=i+1)
	{
		arr[i] = i;
	}
	callout permute(1, n, n);
	return 0;
}