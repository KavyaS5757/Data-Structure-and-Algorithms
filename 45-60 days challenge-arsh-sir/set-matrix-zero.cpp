//Set Matrix Zeros

/*
class Solution {    //code using extra space (2 auxillary arrays)
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();    //row length
        int n = matrix[0].size();  //column length
        int col[n],row[m];

        //setting both array elements to 1 so that we can mark unique
        for(int i=0;i<n;i++) col[i]=1;
        for(int i=0;i<m;i++) row[i]=1;

        //marking the rows and columns containing zeros
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                }
            }
        }

        //checking for the rest of the elements in array using row[],col[]
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(row[i]==0 || col[j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
*/

class Solution {    //code without using extra space (2 auxillary arrays)
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        bool isCol=false, isRow=false;  //to check any row or column is zero or not
        int m=matrix.size();      //row length
        int n=matrix[0].size();   //column length

        //marking the rows and columns containing zeroes in 1st row and 1st column of matrix
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]==0)    //checking if 1st column contains 0
            {
                isCol=true;
            }

            for(int j=0;j<n;j++)
            {
                if(i==0 && matrix[i][j]==0) isRow=true;  //checking 1st row contains 0

                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;  //1st row
                    matrix[0][j]=0;  //1st column
                }
            }
        }

        //Marking in rest of the array
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }

        //marking zeroes in 1st row
        if(isRow)
        {
            for(int j=0;j<n;j++)
            {
                matrix[0][j]=0;
            }
        }

        //marking zeroes in 1st column
        if(isCol)
        {
            for(int i=0;i<m;i++)
            {
                matrix[i][0]=0;
            }
        }
    }
};