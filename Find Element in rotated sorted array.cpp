int Solution::search(const vector<int> &A, int B) {
    int n=A.size();

    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(A[mid]==B){
            return mid;
        }

        else if(A[mid]>=A[low]){

            if(A[low]<=B and A[mid]>=B){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
         else{

            if(A[high]>=B and A[mid]<=B){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    return -1;
}
