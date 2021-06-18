func maxArea(height []int) int {
	// Two Pointer
	l, r := 0, len(height)-1
	maxArea := -1

	for l < r {
		h := minInt(height[r], height[l])
		area := (r - l) * h

		if maxArea < area {
			maxArea = area
		}
		if height[l] >= height[r] {
			r--
		} else {
			l++
		}
	}

	return maxArea
}

func minInt(a, b int) int {
	if a <= b {
		return a
	} else {
		return b
	}
}
