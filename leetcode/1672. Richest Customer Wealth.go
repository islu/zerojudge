func maximumWealth(accounts [][]int) int {
	max := -1
	for _, customer := range accounts {
		tempWealth := 0
		for _, wealth := range customer {
			tempWealth += wealth
		}
		if max < tempWealth {
			max = tempWealth
		}
	}
	return max
}
