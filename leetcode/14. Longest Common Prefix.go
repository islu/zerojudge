func longestCommonPrefix(strs []string) string {
	n := len(strs)
	if n == 0 {
		return ""
	}
	if n == 1 {
		return strs[0]
	}

	longestPrefix := commonPrefix(strs[0], strs[1])
	for i := 2; i < n; i++ {
		longestPrefix = commonPrefix(longestPrefix, strs[i])
		if strings.Compare(longestPrefix, "") == 0 {
			return ""
		}
	}
	return longestPrefix
}

func commonPrefix(s1, s2 string) string {
	prefix := ""
	for i := 0; i < len(s1) && i < len(s2); i++ {
		if s1[i] == s2[i] {
			prefix += string(s1[i])
		} else {
			return prefix
		}
	}
	return prefix
}
