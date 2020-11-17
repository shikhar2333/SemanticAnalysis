int n;
int arr[100010];

function int countSort(int exp)
{
	int output[100010]; 
    int i;
    int count[10]; 
    int index;				
	
	for (i = 0; i < 10; i=i+1)
	{
		count[i] = 0;
	}  

    for (i = 0; i < n; i=i+1)
    { 
        index = arr[i]/exp;
        index = index % 10; 
        ++count[index]; 
  	}

    for (i = 1; i < 10; i=i+1) 
    {
        count[i] = count[i] + count[i - 1]; 
    }
  
    for (i = n - 1; i >= 0; i=i-1) 
    { 
        index = arr[i]/exp;
        index = index % 10; 
        output[count[index] - 1] = arr[i]; 
        --count[index]; 
    } 
  
    for (i = 0; i < n; i = i + 1) 
    {
        arr[i] = output[i]; 
    }
	return 0;	
}

function int main()
{
	input(n);
	int i;
	for (i=0; i<n;i=i+1)
	{
		input(arr[i]);
	}
	int max;
	max = arr[0];
	for (i=1; i<n;i=i+1)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	int exp;
	for(exp = 1; max/exp > 0; exp = exp*10)
	{
		callout countSort(exp);
	}

	for (i = 0; i < n; i = i + 1)
	{  
		print(arr[i]);
	}
	return 0;
}