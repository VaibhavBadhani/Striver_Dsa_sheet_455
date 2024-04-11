class Solution {
    public static void transpose(int[][] matrix)
    {
        for(int i =0;i<matrix.length;i++)
        {
            for(int j =0;j<i;j++)
            {
                int temp= matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }

    }
    public static void reverseRow(int[][] matrix)
    {
        for(int r =0;r<matrix.length;r++)
        {
            int left=0;
            int rigth= matrix.length-1;
            while(left<rigth)
            {
                int temp=matrix[r][left];
                matrix[r][left]=matrix[r][rigth];
                matrix[r][rigth]=temp;
                left++;rigth--;
            }
        }

    }



    public void rotate(int[][] matrix) {
        //transpose
        transpose(matrix);
        //reverse
        reverseRow( matrix);
    }
}