

void swap(int *x, int *y)
{
	int tmp = *y;
	
	*y = *x;
	*x = tmp;
}


void bubble_sort(int *a, int length)
{
	int i = 0, j = 0; 
	
	for(i = 0; i < length; i++){
		for(j = 0; j < length - 1; j++){
			if(a[j] > a[j+1]){
				swap(&a[j], &a[j+1]);		
			}
		}
	}

}
