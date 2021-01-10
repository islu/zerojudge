func findDisappearedNumbers(nums []int) []int {
	// Cyclic sort
	i, n := 0, len(nums)
	for i < n {
		j := nums[i] - 1
		if j < n && nums[i] != nums[j] {
			nums[i], nums[j] = nums[j], nums[i]
		} else {
			i++
		}
	}
	// Find all missing number
	missed := make([]int, 0)
	for i := 0; i < len(nums); i++ {
		if nums[i] != i+1 {
			missed = append(missed, i+1)
		}
	}

	return missed
}
