func missingNumber(nums []int) int {

	missing := len(nums)

	for ind, val := range nums {
		missing ^= ind ^ val
	}

	return missing
}
