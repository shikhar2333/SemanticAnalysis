int n;
int arr[100010];

function int merge(int l, int m, int r) 
{ 
    int i;
    int j;
    int k;
    int n1;
    int n2; 
    n1 = m - l + 1; 
    n2 =  r - m; 
  
    int l[100010], r[100010]; 
  
    for (i = 0; i < n1; i=i+1)
    { 
        l[i] = arr[l + i]; 
    }
    for (j = 0; j < n2; j=j+1) 
    {
        r[j] = arr[m + 1 + j]; 
    }
  
    i = 0;
    j = 0; 
    k = l;

    while (i < n1 && j < n2) 
    { 
        if (l[i] <= r[j]) 
        { 
            arr[k] = l[i]; 
            ++i; 
        } 
        else
        { 
            arr[k] = r[j]; 
            ++j; 
        } 
        ++k; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = l[i]; 
        ++i; 
        ++k; 
    } 

    while (j < n2) 
    { 
        arr[k] = r[j]; 
        ++j; 
        ++k; 
    } 
    return 0;
} 

function int mergeSort(int l, int r)
{
	if (l < r)
	{
		int m;
		m = l + r;
		m = m / 2;

		callout mergeSort(l, m);
		callout mergeSort(m+1, l);

		callout merge(l, m, r);
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

	callout mergeSort(0, n-1);

	for (i = 0; i < n; i = i + 1)
	{  
		print(arr[i]);
	}
	return 0;
}