#include <stdio.h>
   
int main() {
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
    	int col, row;
    	scanf("%d", &col);
    	col == row;
    	
	    int matrix[col][row];
	    
	    for (int i = 0; i < row; i++) {
	        for (int j = 0; j < col; j++) {
	            scanf("%d", &matrix[i][j]);
	        }
	    }
	}
	    
	    
    return 0;
}
