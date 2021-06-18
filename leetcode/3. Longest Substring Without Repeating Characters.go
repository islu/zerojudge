// Sliding Window
func lengthOfLongestSubstring(s string) int {
	windowStart, windowEnd, maxLen := 0, 0, 0
	set := ""

	for windowEnd < len(s) {
		set = s[windowStart:windowEnd]
		if !strings.Contains(set, string(s[windowEnd])) {	
			windowEnd++
		} else {
			windowStart++
		}
		set = s[windowStart:windowEnd]
		if maxLen < len(set) {
			maxLen = len(set)
		}
	}

	return maxLen
}
