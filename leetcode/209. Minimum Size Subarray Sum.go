//
// Sliding Window
//
func minSubArrayLen(s int, nums []int) int {
	windowSum, windowStart := 0, 0
	minWindowSize := 2147483647
	for windowEnd := 0; windowEnd < len(nums); windowEnd++ {
		windowSum += nums[windowEnd]
		for windowSum >= s {
			if minWindowSize > windowEnd-windowStart+1 {
				minWindowSize = windowEnd - windowStart + 1
			}
			windowSum -= nums[windowStart]
			windowStart++
		}
	}
	if minWindowSize == 2147483647 {
		return 0
	} else {
		return minWindowSize
	}
}
