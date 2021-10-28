int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();

    int low=0;
    int high=n-1;

    while(low<high){
        int mid=(low+high)/2;
        if(A[high]>=A[mid]){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return A[low];

}

