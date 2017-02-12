#include<iostream.h>
#include<conio.h>

void print(int *a, int n)
{
    int i=0;
    while(i<n){
        cout<<a[i]<<",";
        i++;
    }
}

void swap(int i,int j, int *a){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}


void quicksort(int *arr, int left, int right){
    int min = (left+right)/2;

    int i = left;
    int j = right;
    int pivot = arr[min];

    while(left<j || i<right)
    {
	while(arr[i]<pivot)
	i++;
	while(arr[j]>pivot)
	j--;

	if(i<=j){
	    swap(i,j,arr);
	    i++;
	    j--;
	}
	else{
	    if(left<j)
		quicksort(arr, left, j);
	    if(i<right)
		quicksort(arr,i,right);
	    return;
	}
    }
}


void main() {
    int arr[6],i;
    clrscr();
    for(i=0;i<6;i++)
    {
    cin>>arr[i];
    }
    quicksort(arr, 0, (sizeof(arr)/sizeof(arr[0]))-1);
    print(arr, (sizeof(arr)/sizeof(arr[0])));
    getch();
}