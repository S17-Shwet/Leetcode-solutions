class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        if(matrix.empty()) return result;

        int top=0;//topmmost row index
        int bottom=matrix.size()-1;//bottommost row index
        int left=0;//leftmost col index
        int right=matrix[0].size()-1;//first row of matrix and its size means col size rightmost col size

        while(top <= bottom && left <= right )
        {
            //traverse from left to right
            for(int i=left;i<=right;i++)
            {
                result.push_back(matrix[top][i]);
            }
        
        // move the top boundary down (since top row is processed)
        top++;

        for(int i=top;i<= bottom;i++)
        {
            result.push_back(matrix[i][right]);
        }
        //move the right boundary left
        right--;

        //traverse from right -> left along bottom row
        if(top <= bottom)
        {
            for(int i=right;i>=left;i--)
            {
                result.push_back(matrix[bottom][i]);
            }
        
        //move the bottom boundary up
        bottom--;
        }
    //traverse from bottom -> top along the leftmost col 

    if(left <= right)
    {
        for(int i=bottom;i>=top;i--)
        {
            result.push_back(matrix[i][left]);
        }
            //move the left boundary right
           left++;
    }
}
 
    return result;
    }   
        
};