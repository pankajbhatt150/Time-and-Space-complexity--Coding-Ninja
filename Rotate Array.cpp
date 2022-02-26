// Solution
// for rotate Array
void rotate(int *input, int d, int n)
{
     int arr[n],k=0;
    for(int i=d; i<n; i++) //dth element is the element we need to pick to start rotation
        arr[k++]=input[i];
    for(int j=0; j<d; j++) //after rotation of all elemnts after d elements
        arr[k++]=input[j];                  //the rmaining d elements are shifted to arr 
    for(int l=0; l<n; l++) //whole arr is copied to our main array that is input.
        input[l]=arr[l];
}
