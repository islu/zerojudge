func decode(encoded []int, first int) []int {
	d := []int{}

	d = append(d, first)
	for i, v := range encoded {
		d = append(d, d[i]^v)
	}

	return d
}
