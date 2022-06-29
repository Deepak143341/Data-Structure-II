class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int> (n));
        int left=0,last_col=n-1;
        int top=0,last_row=n-1,dir=0;
        int count=1;
        
        while(left <= last_col && top <= last_row){
            
            if(dir==0){
            for(int i = left; i<=last_col; i++){
                v[top][i] = count++;
            }
            top++,dir++;
            }
            
            else if(dir==1){
            for(int i = top; i<=last_row; i++){
                v[i][last_col] = count++;
            }
            last_col--,dir++;
            }
            
            
            else if(dir==2){
                for(int i = last_col; i>=left; i--){
                    v[last_row][i] = count++;
                }
                last_row--,dir++;
            }
            
            else if(dir==3){
                for(int i = last_row; i>=top; i--){
                    v[i][left] = count++;
                }
                left++,dir=0;
            }
        }
        
        return v;
    }
};
