
vector<int> findMaxGuests(int Entry[], int Exit[], int N)
	{
	   // Your code goes her

	   sort(Entry,Entry+N);
	   sort(Exit,Exit+N);

	   int i=1;
	   int j=0;
	   int plt=1;
	   int index=Entry[0];
	   while(i<N and j<N){
	       if(Entry[i]<=Exit[j]){
	            plt++;
	            index=Entry[i];
	           i++;

	       }
	       else{
	           i++;
	           j++;
	       }
	   }


	   return {plt, index};

	}
