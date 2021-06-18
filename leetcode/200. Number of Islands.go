// Depth-First Search
func numIslands(grid [][]byte) int {
	islands := 0
	for i := 0; i < len(grid); i++ {
		for j := 0; j < len(grid[i]); j++ {
			if grid[i][j] == '1' {
				islands++
				dfs(&grid, i, j)
			}
		}
	}

	return islands
}

func dfs(grid *[][]byte, i, j int) {
	if (*grid)[i][j] == '0' {
		return
	}

	(*grid)[i][j] = '0'

	m, n := len((*grid)), len((*grid)[i])

	if i-1 >= 0 {
		dfs(grid, i-1, j)
	}
	if i+1 < m {
		dfs(grid, i+1, j)
	}
	if j-1 >= 0 {
		dfs(grid, i, j-1)
	}
	if j+1 < n {
		dfs(grid, i, j+1)
	}
}
