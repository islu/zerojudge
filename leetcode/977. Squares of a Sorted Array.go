//
// Two Pointer
//
func sortedSquares(nums []int) []int {
	n := len(nums)
	squares := make([]int, n)

	highesIndex := n - 1
	l, r := 0, n-1

	for l <= r {
		leftSquare := nums[l] * nums[l]
		rightSquare := nums[r] * nums[r]

		if leftSquare >= rightSquare {
			squares[highesIndex] = leftSquare
			l++
		} else {
			squares[highesIndex] = rightSquare
			r--
		}

		highesIndex--
	}

	return squares
}
