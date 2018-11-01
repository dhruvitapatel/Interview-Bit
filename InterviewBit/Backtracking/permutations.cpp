void swap(int &a,int &b){
	    int c=a;
		    a=b;
			    b=c;
}
void permutation(vector<int> &A,vector< vector<int> > &v,int l) {
	    if (l == A.size() - 1) {
			        v.push_back(A);
					        return;
							    }
		    
		    for (int i = l; i< A.size(); i++) {
				        swap(A[l], A[i]);
						        permutation(A, v, l+1);
								        swap(A[l], A[i]);
										    }
}
vector<vector<int> > Solution::permute(vector<int> &A) {
	    vector<vector<int>> result;
		    permutation(A, result, 0);
			    sort(result.begin(), result.end());
				    return result;
}

