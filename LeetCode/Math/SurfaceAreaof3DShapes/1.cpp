class Solution {
public:  
  int surfaceArea(vector<vector<int>> grid) {
    int sum = 0, lim = grid.size(), end = grid.size() - 1;
    
    for(int y = 0; y != lim; y++){
      sum += grid[y][0] + grid[y][end];
      if(grid[y][0]) sum += 2;
      for(int x = 0, xx = 1; xx < lim; x++, xx++){
        if(grid[y][xx]) sum += 2;
        sum += abs(grid[y][x] - grid[y][xx]);
      }
    }
    
    for(int x = 0; x != lim; x++){
      sum += grid[0][x] + grid[end][x];
      for(int y = 0, yy = 1; yy < lim; y++, yy++)
        sum += abs(grid[y][x] - grid[yy][x]);
    }
    
    return sum;     
  }
};
