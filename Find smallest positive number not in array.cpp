int solution(vector<int> &A) {
    
    int n= A.size();

    bool exist[ n + 1 ] = {false}; 

    for (int i=0; i< n; i++){
        if(A[i] > 0 && A[i] <=n){
            exist[A[i]]= true;
        }
    }

    for (int i =1; i<= n; i++){
        if (!exist[i]){
            return i;
        }
    }

    return n+1;
}